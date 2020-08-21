cmake_minimum_required(VERSION 3.10.2)
project(lab09_exercise LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_executable(${PROJECT_NAME}
        # ./main.cpp ./fun.cpp
        ./main2.cpp ./candyBar.cpp
        )
