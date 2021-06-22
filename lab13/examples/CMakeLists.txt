cmake_minimum_required(VERSION 3.12)
project(${PROJECT_NAME}_lab13_example)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME}_main1 ${CMAKE_CURRENT_SOURCE_DIR}/code1/main1.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code1/circle_.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code1/circle_.h
        ${CMAKE_CURRENT_SOURCE_DIR}/code1/rectangle_.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code1/rectangle_.h)
add_executable(${PROJECT_NAME}_main2
        ${CMAKE_CURRENT_SOURCE_DIR}/code2/main2.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code2/circle_.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code2/circle_.h
        ${CMAKE_CURRENT_SOURCE_DIR}/code2/rectangle_.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code2/rectangle_.h
        ${CMAKE_CURRENT_SOURCE_DIR}/code2/shape_.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code2/shape_.h)
add_executable(${PROJECT_NAME}_main3 ${CMAKE_CURRENT_SOURCE_DIR}/code3/main3.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code3/circle_.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code3/circle_.h
        ${CMAKE_CURRENT_SOURCE_DIR}/code3/rectangle_.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code3/rectangle_.h
        ${CMAKE_CURRENT_SOURCE_DIR}/code3/shape_.cpp)