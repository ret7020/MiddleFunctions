cmake_minimum_required(VERSION 3.23)
project(MiddleFunctions)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(MiddleFunctions
        middle.h main.cpp f_1_5.cpp f_5_10.cpp 10_15.cpp 15_18.cpp)
