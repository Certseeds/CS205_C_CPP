cmake_minimum_required(VERSION 3.10.2)
project(lab09_exercise LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_executable(${PROJECT_NAME}_1
        ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp ${CMAKE_CURRENT_SOURCE_DIR}/fun.cpp
        )
add_executable(${PROJECT_NAME}_2
        ${CMAKE_CURRENT_SOURCE_DIR}/main2.cpp ${CMAKE_CURRENT_SOURCE_DIR}/candybar.cpp
        )

