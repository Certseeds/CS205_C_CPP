cmake_minimum_required(VERSION 3.10.2)
project(lab08_example)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(${PROJECT_NAME}
        overloaded_functions_1.cpp
        )
