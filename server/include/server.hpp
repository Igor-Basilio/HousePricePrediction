#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <grpcpp/grpcpp.h>
#include "endpoints.pb.h"
#include "endpoints.grpc.pb.h"
#include "model.hpp"
#include "helper.hpp"

using namespace std;

namespace sky {

void HandlePredictPriceLogic(const PredictionRequest& req, PredictionReply* rep) {
    rep->set_price(model::predict(req.area()));
    cout << "hello" << endl;
}

void HandlePingLogic(const ping_& req, pong_* rep) {
    rep->set_msg("Pong");
}

// Base handler class for GenericHandler
template <typename Service>
class BaseHandler {
    public:
        using AsyncService = typename Service::AsyncService;
        enum class Type { PredictPrice_L, Ping };

        BaseHandler(grpc::ServerCompletionQueue* cq, AsyncService* service)
            : cq_(cq), service_(service) {}
        virtual ~BaseHandler() = default;
        virtual Type GetType() const = 0;
        virtual void process_() = 0;

    protected:
        grpc::ServerCompletionQueue* cq_;
        grpc::ServerContext ctx_;
        AsyncService* service_;
        enum class CallStatus { RESPOND, DELETE };
        CallStatus status_ = CallStatus::RESPOND;
}; 

// GenericHandler that accepts any function from any service
template <
    typename Service,
    typename Request,
    typename Response,
    void (Service::AsyncService::*RequestMethod)(grpc::ServerContext*, Request*,
        grpc::ServerAsyncResponseWriter<Response>*, grpc::CompletionQueue*,
        grpc::ServerCompletionQueue*, void*),
    typename BaseHandler<Service>::Type HandlerType,
    void (*ResponseLogic)(const Request&, Response*)
>
class GenericHandler : public BaseHandler<Service> {
public:
    GenericHandler(grpc::ServerCompletionQueue* cq,
                   typename BaseHandler<Service>::AsyncService* service)
        : BaseHandler<Service>(cq, service), responder_(&this->ctx_) {
        (this->service_->*RequestMethod)(
            &this->ctx_, &request_, &responder_,
            this->cq_, this->cq_, this
        );
    }

    typename BaseHandler<Service>::Type GetType() const override {
        return HandlerType;
    }

    void process_() override {
        if (this->status_ == BaseHandler<Service>::CallStatus::RESPOND) {
            this->status_ = BaseHandler<Service>::CallStatus::DELETE;
            new GenericHandler(this->cq_, this->service_); // Re-enqueue handler
            ResponseLogic(request_, &response_);
            responder_.Finish(response_, grpc::Status::OK, this);
        } else if (this->status_ == BaseHandler<Service>::CallStatus::DELETE) {
            delete this;
        }
    }

private:
    Request request_;
    Response response_;
    grpc::ServerAsyncResponseWriter<Response> responder_;
};

// How to define single classes for any function on service :
// class house_prediction__PredictPrice_L__Handler : BaseHandler
// {
//     public:
//         house_prediction__PredictPrice_L__Handler(
//                 grpc::ServerCompletionQueue* cq, 
//                 house_prediction::AsyncService* service )
//         : responder_(&ctx_), BaseHandler(cq, service)
//         {
//                service_->RequestPredictPrice_L(&ctx_, &predictionr_,
//                        &responder_, cq_, cq_, this); 
//         }
//         Type GetType() const override { return Type::PredictPrice_L; } 
//         void process_() 
//         {
//             if(status_==CallStatus::RESPOND)
//             {
//                status_=CallStatus::DELETE;
//                new house_prediction__PredictPrice_L__Handler(cq_, service_);
//                res_logic();
//                responder_.Finish(predictionrepl_, grpc::Status::OK, this);
//             } else if(status_==CallStatus::DELETE)
//             {
//                delete this;
//             }
//         }
//
//     private:
//         PredictionRequest predictionr_;
//         PredictionReply predictionrepl_;
//         grpc::ServerAsyncResponseWriter<PredictionReply> responder_;
//
//         void res_logic()
//         {
//             predictionrepl_.set_price(
//                     model::predict(predictionr_.area()));
//         }
// };
// class house_prediction__Ping__Handler : BaseHandler 
// {
//     public:
//         house_prediction__Ping__Handler(
//                 grpc::ServerCompletionQueue* cq,
//                 house_prediction::AsyncService* service)
//         : responder_(&ctx_), BaseHandler(cq, service)
//         {
//                service_->RequestPing(&ctx_, &pingr_,
//                        &responder_, cq_, cq_, this); 
//         }
//         Type GetType() const override { return Type::Ping; } 
//
//         void process_() 
//         {
//            if(status_==CallStatus::RESPOND)
//            {
//                status_=CallStatus::DELETE;
//                new house_prediction__Ping__Handler(cq_, service_);
//                res_logic();
//                responder_.Finish(pongr_, grpc::Status::OK, this);
//            }else if(status_==CallStatus::DELETE)
//            {
//                delete this;
//            }
//         }
//
//     private:
//         ping_ pingr_;
//         pong_ pongr_;
//         grpc::ServerAsyncResponseWriter<pong_> responder_;
//
//         void res_logic()
//         {
//             pongr_.set_msg("Pong");
//         }
// };

class ServerImpl final
{
    public:
    ServerImpl() {}
    ~ServerImpl() 
    {
        server_->Shutdown();
        cq_->Shutdown();
    }

    void run()
    {
        string server_address("127.0.0.1:6531");
        grpc::ServerBuilder builder; 
        builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
        builder.RegisterService(&service_); 
        cq_ = builder.AddCompletionQueue();
        server_ = builder.BuildAndStart();
        cout << "Server listening on " << server_address << endl;
        handleRpcs();
    }

    private:

    void handleRpcs()
    {
       // new house_prediction__Ping__Handler(cq_.get(),
       //         &service_);

       // new house_prediction__PredictPrice_L__Handler(cq_.get(),
       //         &service_);
       
        using HousePredictionHandler = GenericHandler<
            house_prediction,
            PredictionRequest,
            PredictionReply,
            &house_prediction::AsyncService::RequestPredictPrice_L,
            BaseHandler<house_prediction>::Type::PredictPrice_L,
            HandlePredictPriceLogic
        >;

      //  using PingHandler = GenericHandler<
      //      house_prediction,
      //      ping_,
      //      pong_,
      //      &house_prediction::AsyncService::RequestPing,
      //      BaseHandler<house_prediction>::Type::Ping,
      //      HandlePingLogic
      //  >;

      //  service_.RequestPing();

        // Register initial handlers
        new HousePredictionHandler(cq_.get(), &service_);
       // new PingHandler(cq_.get(), &service_);

        void* tag; bool ok;
        for(;;)
        {
            cq_->Next(&tag, &ok);
            if(ok)
            {
                auto *h = static_cast<BaseHandler<house_prediction>*>(tag);
                if (h->GetType()==BaseHandler<house_prediction>::Type::Ping)
                {
                    auto *p =
                        static_cast<HousePredictionHandler*>(tag);
                    p->process_();
                } else if(h->GetType()==BaseHandler<house_prediction>::Type::PredictPrice_L) 
                {
                    auto *l =
                        static_cast<HousePredictionHandler*>(tag);
                    l->process_();
                }
            }
        }
    }

    unique_ptr<grpc::ServerCompletionQueue> cq_;
    unique_ptr<grpc::Server> server_;
    house_prediction::AsyncService service_;
};

} 

#endif // SERVER_H
