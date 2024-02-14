cmake_minimum_required(VERSION 3.24)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 17)

file (GLOB SRC "${CMAKE_SOURCE_DIR}/src/*.cpp")

add_executable(${PROJECT_NAME} ${SRC} main.cpp)
