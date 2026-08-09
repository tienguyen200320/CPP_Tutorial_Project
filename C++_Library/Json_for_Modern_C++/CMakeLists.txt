cmake_minimum_required(VERSION 3.12)
project(JsonForModernCpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(json_handling_in_cpp
    json_handling_in_cpp.cpp
)

target_include_directories(json_handling_in_cpp PRIVATE
    "C:/Users/DELL/tien/Desktop/Software_Learning/Library/json/include"
)
