cmake_minimum_required(VERSION 3.16.6)
project(lab15_exercise LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_executable(${PROJECT_NAME}
        ./lab15_01.cpp
        )
