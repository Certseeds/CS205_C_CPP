cmake_minimum_required(VERSION 3.16.6)
project(lab11_exercise LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_executable(${PROJECT_NAME}_01
        ./CandyBar.cpp
        ./lab11_01.cpp)
add_executable(${PROJECT_NAME}_02
        ./Rectangle.cpp
        ./lab11_02.cpp)
