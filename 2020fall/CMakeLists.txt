cmake_minimum_required(VERSION 3.10.2)
project(2020fall LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

enable_testing()
set(_List 1) # 2 3
foreach (element IN LISTS _List)
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/ass${element})
endforeach ()
unset(_List)
