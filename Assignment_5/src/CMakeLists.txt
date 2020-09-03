cmake_minimum_required(VERSION 3.16.6)
# WSL18.04
project(Assignment_5 LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_library(UTF8string
        SHARED
        UTF8string.cpp
        UTF8string.hpp
        utf8.c
        utf8.h)

add_executable(${PROJECT_NAME}_catch_test ./test_catch_UTF8_String.cpp)
target_link_libraries(${PROJECT_NAME}_catch_test UTF8string)

add_executable(${PROJECT_NAME}_simple_test ./testUTF8string.cpp)
target_link_libraries(${PROJECT_NAME}_simple_test UTF8string)