cmake_minimum_required(VERSION 3.10.2)
project(${PROJECT_NAME}_lab06_example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(${PROJECT_NAME}  ./if_else_if_statement.cpp)
file(GLOB USER_LIBS_PATH ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp) # regex to find libs, more flexibility
foreach (elementName IN LISTS USER_LIBS_PATH)
    string(REGEX REPLACE ".*/" "" elementName ${elementName})
    string(REGEX REPLACE ".cpp" "" elementName ${elementName})
    add_executable(${PROJECT_NAME}_${elementName} ${elementName}.cpp)
endforeach ()
unset(USER_LIBS_PATH)