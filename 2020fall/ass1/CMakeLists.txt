cmake_minimum_required(VERSION 3.10.2)
project(${PROJECT_NAME}_ass1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

enable_testing()
set(_List src include test)
foreach (element IN LISTS _List)
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/${element})
endforeach ()
unset(_List)
