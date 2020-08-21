cmake_minimum_required(VERSION 3.10)
project(lab03_exercise)
set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME}_test test_lab03.cpp)
add_executable(${PROJECT_NAME}_01 lab03_01.cpp)
add_executable(${PROJECT_NAME}_02 lab03_02.cpp)
add_executable(${PROJECT_NAME}_03 lab03_03.cpp)

# target_link_libraries(lab03 catch)