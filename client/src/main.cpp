
#include <iostream>

#include <grpc/grpc.h>
#include <grpcpp/create_channel.h>

#include "endpoints.pb.h"
#include "endpoints.grpc.pb.h"

using namespace std;

int main(void)
{
    house_prediction g;    
    auto stub = g.NewStub(grpc::CreateChannel("localhost:6531",
              grpc::InsecureChannelCredentials()));

    PredictionRequest request;
    request.set_area(8900);

    grpc::ClientContext context;
    PredictionReply reply;

    grpc::Status status = stub->PredictPrice_L(&context, request, &reply);  
    cout << reply.price() << endl; 

   // ping_ req;
   // grpc::ClientContext c2; 
   // pong_ rep;

   // status = stub->Ping(&c2, req, &rep);
   // cout << rep.msg() << endl;

    return EXIT_SUCCESS;
}

