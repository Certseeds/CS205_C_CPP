cmake_minimum_required(VERSION 3.10.2)
project(lab06_example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(${PROJECT_NAME}  ./if_else_if_statement.cpp)
