cmake_minimum_required(VERSION 3.8)
project(cpp_hello_world)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(cpp_hello_world ${SOURCE_FILES})