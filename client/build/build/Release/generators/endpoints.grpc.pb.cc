// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: endpoints.proto

#include "endpoints.pb.h"
#include "endpoints.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>

static const char* house_prediction_method_names[] = {
  "/house_prediction/PredictPrice_L",
  "/house_prediction/Ping",
};

std::unique_ptr< house_prediction::Stub> house_prediction::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< house_prediction::Stub> stub(new house_prediction::Stub(channel, options));
  return stub;
}

house_prediction::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_PredictPrice_L_(house_prediction_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Ping_(house_prediction_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status house_prediction::Stub::PredictPrice_L(::grpc::ClientContext* context, const ::PredictionRequest& request, ::PredictionReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::PredictionRequest, ::PredictionReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_PredictPrice_L_, context, request, response);
}

void house_prediction::Stub::async::PredictPrice_L(::grpc::ClientContext* context, const ::PredictionRequest* request, ::PredictionReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::PredictionRequest, ::PredictionReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PredictPrice_L_, context, request, response, std::move(f));
}

void house_prediction::Stub::async::PredictPrice_L(::grpc::ClientContext* context, const ::PredictionRequest* request, ::PredictionReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PredictPrice_L_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::PredictionReply>* house_prediction::Stub::PrepareAsyncPredictPrice_LRaw(::grpc::ClientContext* context, const ::PredictionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::PredictionReply, ::PredictionRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_PredictPrice_L_, context, request);
}

::grpc::ClientAsyncResponseReader< ::PredictionReply>* house_prediction::Stub::AsyncPredictPrice_LRaw(::grpc::ClientContext* context, const ::PredictionRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPredictPrice_LRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status house_prediction::Stub::Ping(::grpc::ClientContext* context, const ::ping_& request, ::pong_* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ping_, ::pong_, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Ping_, context, request, response);
}

void house_prediction::Stub::async::Ping(::grpc::ClientContext* context, const ::ping_* request, ::pong_* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ping_, ::pong_, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Ping_, context, request, response, std::move(f));
}

void house_prediction::Stub::async::Ping(::grpc::ClientContext* context, const ::ping_* request, ::pong_* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Ping_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::pong_>* house_prediction::Stub::PrepareAsyncPingRaw(::grpc::ClientContext* context, const ::ping_& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::pong_, ::ping_, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Ping_, context, request);
}

::grpc::ClientAsyncResponseReader< ::pong_>* house_prediction::Stub::AsyncPingRaw(::grpc::ClientContext* context, const ::ping_& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPingRaw(context, request, cq);
  result->StartCall();
  return result;
}

house_prediction::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      house_prediction_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< house_prediction::Service, ::PredictionRequest, ::PredictionReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](house_prediction::Service* service,
             ::grpc::ServerContext* ctx,
             const ::PredictionRequest* req,
             ::PredictionReply* resp) {
               return service->PredictPrice_L(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      house_prediction_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< house_prediction::Service, ::ping_, ::pong_, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](house_prediction::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ping_* req,
             ::pong_* resp) {
               return service->Ping(ctx, req, resp);
             }, this)));
}

house_prediction::Service::~Service() {
}

::grpc::Status house_prediction::Service::PredictPrice_L(::grpc::ServerContext* context, const ::PredictionRequest* request, ::PredictionReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status house_prediction::Service::Ping(::grpc::ServerContext* context, const ::ping_* request, ::pong_* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


