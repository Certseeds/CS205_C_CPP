cmake_minimum_required(VERSION 3.10.2)
project(lab08_exercise LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(${PROJECT_NAME}
        #./lab08_02.cpp
         ./lab08_01.cpp
        )
