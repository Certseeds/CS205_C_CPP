cmake_minimum_required(VERSION 3.10.2)
project(lab08_exercise LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_executable(${PROJECT_NAME}_01 ${CMAKE_CURRENT_SOURCE_DIR}//lab08_01.cpp)
add_executable(${PROJECT_NAME}_02 ${CMAKE_CURRENT_SOURCE_DIR}//lab08_02.cpp)
