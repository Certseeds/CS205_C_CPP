cmake_minimum_required(VERSION 3.10.2)
project(Assignment_3 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
add_library(utf8_ass3
        SHARED
        utf8.c
        utf8.h)
add_executable(${PROJECT_NAME}_01 ./Assignment_3_01.cpp)
add_executable(${PROJECT_NAME}_02 ./Assignment_3_02.cpp)

add_executable(${PROJECT_NAME}_03
        ./Assignment_3_03.cpp)
target_link_libraries(${PROJECT_NAME}_03 utf8_ass3)

add_executable(${PROJECT_NAME}_test ./test_assignment_3.cpp)
target_link_libraries(${PROJECT_NAME}_test utf8_ass3)
