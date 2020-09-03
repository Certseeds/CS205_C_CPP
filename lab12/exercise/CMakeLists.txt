cmake_minimum_required(VERSION 3.16.6)
project(lab12_exercise LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_library(lab12_Complex
        SHARED
        Complex.cpp
        Complex.h)
add_library(lab12_Number
        SHARED
        Number.cpp
        Number.h)

add_executable(${PROJECT_NAME}_01 ./lab12_01.cpp)
target_link_libraries(${PROJECT_NAME}_01 lab12_Complex)

add_executable(${PROJECT_NAME}_02 ./lab12_02.cpp)
target_link_libraries(${PROJECT_NAME}_02 lab12_Number)
