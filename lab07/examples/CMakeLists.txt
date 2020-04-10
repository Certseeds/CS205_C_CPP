cmake_minimum_required(VERSION 3.10.2)
project(lab07_example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(${PROJECT_NAME}
        ./lib_Fun.cpp
        )
