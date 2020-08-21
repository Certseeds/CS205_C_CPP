cmake_minimum_required(VERSION 3.10)
project(lab02_exercise)
set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME}_test test_lab02.cpp)
add_executable(${PROJECT_NAME}_01 lab02_01.cpp)
add_executable(${PROJECT_NAME}_02 lab02_02.cpp)
add_executable(${PROJECT_NAME}_03 lab02_03.cpp)