cmake_minimum_required(VERSION 3.16.6)
# WSL18.04
project(Assignment_5 LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_C_FLAGS "-std=c11")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(${PROJECT_NAME}
        ./test1.cpp

        )
