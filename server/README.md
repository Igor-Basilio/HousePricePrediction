
# 







# Building information

- make cinstall 
- make run DATASET=<DATASET_PATH> DELIMITER=<DELIMITER>

you need the package mariadbcpp in your system,
on archlinux there is an AUR package for that, leaving it
on /usr/lib is enough for the conan recipe to find it.

schema/ contains the .sql script used to create 
the mariadb tables, and database.

using the gRPC/1.69.0 conan recipe means that the 
protobuf requirement of 5.27.0 is also used, you'll need a version
of protobuf on your system equal to that to be able to compile the .proto
files located on protos/ compiling from source is pretty straight
forward : https://github.com/protocolbuffers/protobuf/releases

while using conan the grpc runtime and protoc generated files are 
guaranteed to be of equal versions so this ins't a problem
take a look at the main CMakeLists.txt for more info.

( This is the reason why :
  https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp )

