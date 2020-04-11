cmake_minimum_required(VERSION 3.10.2)
project(Assignment_3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(${PROJECT_NAME}
        #./Assignment_3_01.cpp
        ./Assignment_3_02.cpp
        #./Assignment_3_03.cpp
        )
