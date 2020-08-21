cmake_minimum_required(VERSION 3.10.2)
project(Assignment_3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_executable(${PROJECT_NAME}_01 ./Assignment_3_01.cpp)
add_executable(${PROJECT_NAME}_02 ./Assignment_3_02.cpp)
add_executable(${PROJECT_NAME}_03 ./Assignment_3_03.cpp)
add_executable(${PROJECT_NAME}_test ./test_assignment_3.cpp)
