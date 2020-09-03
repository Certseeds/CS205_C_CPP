cmake_minimum_required(VERSION 3.16.6)
project(lab11_exercise LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_library(lab11_CandyBar
        SHARED
        CandyBar.cpp
        CandyBar.h)
add_library(lab11_Rectangle
        SHARED
        Rectangle.cpp
        Rectangle.h)
add_executable(${PROJECT_NAME}_01 ./lab11_01.cpp)
target_link_libraries(${PROJECT_NAME}_01 lab11_CandyBar)

add_executable(${PROJECT_NAME}_02 ./lab11_02.cpp)
target_link_libraries(${PROJECT_NAME}_02 lab11_Rectangle)
