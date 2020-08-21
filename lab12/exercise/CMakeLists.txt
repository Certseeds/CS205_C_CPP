cmake_minimum_required(VERSION 3.16.6)
project(lab12_exercise LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_executable(${PROJECT_NAME}_01
        ./Complex.cpp
        ./lab12_01.cpp)
add_executable(${PROJECT_NAME}_02
        ./Number.cpp
        ./lab12_02.cpp)
