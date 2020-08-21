cmake_minimum_required(VERSION 3.16.6)
# WSL18.04
project(Assignment_5 LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_executable(${PROJECT_NAME}
        ./test_catch_UTF8_String.cpp
        ./UTF8string.cpp
        ./utf8.c
        )
add_executable(${PROJECT_NAME}_simple_test
        ./testUTF8string.cpp
        ./UTF8string.cpp
        ./utf8.c
        )
