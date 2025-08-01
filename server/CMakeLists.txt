
cmake_minimum_required(VERSION 3.18.3)
project(dhp_server)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include_directories(include)

set(SOURCES src/ETL.cpp
            src/global.cpp
            src/model.cpp 
            src/helper.cpp
            src/main.cpp
    )

set(HEADERS include/ETL.hpp
            include/model.hpp
            include/global.hpp
            include/server.hpp
            include/helper.hpp)

find_package(mariadbcpp CONFIG REQUIRED)
find_package(Eigen3 CONFIG REQUIRED)
find_package(Boost CONFIG REQUIRED)

#***********************************
#   Protobuf and gRPC setup

find_package(gRPC CONFIG REQUIRED)
find_package(Protobuf CONFIG REQUIRED)

# Conan packages both protobuf and grpc 
# of the exact same version, hence keeping compatibility
# don't use your system protoc.
set(Protobuf_PROTOC_EXECUTABLE ${CONAN_BIN_DIRS_PROTOBUF}/protoc)
set(GRPC_CPP_PLUGIN_EXECUTABLE ${CONAN_BIN_DIRS_GRPC}/grpc_cpp_plugin)

get_filename_component(PROTOS_ONE_ABOVE ../ ABSOLUTE)

add_library(protos OBJECT 
    "${PROTOS_ONE_ABOVE}/protos/endpoints.proto"
    "${PROTOS_ONE_ABOVE}/protos/example2.proto"
)

target_link_libraries(protos PUBLIC protobuf::libprotobuf gRPC::grpc++)

set(PROTO_BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR})
set(PROTO_IMPORT_DIRS "${PROTOS_ONE_ABOVE}/protos")

# Generate .pb.cc && .pb.h Protocol buffers the "messages"
protobuf_generate(
    TARGET protos
    IMPORT_DIRS ${PROTO_IMPORT_DIRS}
    PROTOC_OUT_DIR ${PROTO_BINARY_DIR} )

# Generate .grpc.pb.cc && .grpc.pb.h the "services"
protobuf_generate(
    TARGET protos
    LANGUAGE grpc 
    PLUGIN "protoc-gen-grpc=\$<TARGET_FILE:gRPC::grpc_cpp_plugin>"
    GENERATE_EXTENSIONS .grpc.pb.h .grpc.pb.cc
    IMPORT_DIRS ${PROTO_IMPORT_DIRS}
    PROTOC_OUT_DIR ${PROTO_BINARY_DIR} )

#**********************************

# Yes the protos are being compiled twice, 
# i don't know how to fix it
# whatever compilation is fast anyways
add_executable(${PROJECT_NAME} ${SOURCES}
    "${PROTO_BINARY_DIR}/endpoints.pb.cc" 
    "${PROTO_BINARY_DIR}/endpoints.grpc.pb.cc"
    "${PROTO_BINARY_DIR}/example2.pb.cc" 
    "${PROTO_BINARY_DIR}/example2.grpc.pb.cc"
    ${HEADERS}
    "${PROTO_BINARY_DIR}/example2.pb.h" 
    "${PROTO_BINARY_DIR}/example2.grpc.pb.h" 
    "${PROTO_BINARY_DIR}/endpoints.pb.h" 
    "${PROTO_BINARY_DIR}/endpoints.grpc.pb.h" )

target_link_libraries(${PROJECT_NAME}
    mariadbcpp::mariadbcpp Eigen3::Eigen grpc::grpc boost::boost )

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_BINARY_DIR})

#**************************************#
#
# If you need a system package reference
# create a conanfile.py for the recipe
# pass it on with self.cpp_info.system_libs = ["mariadbcpp"]
# and then reference it in here like a normal conan package
#
#*************************************#

