cmake_minimum_required(VERSION 3.10.2)
# WSL18.04
project(Assignment_5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_executable(${PROJECT_NAME}_catch_test ${CMAKE_CURRENT_SOURCE_DIR}/test_catch_UTF8_String.cpp)
target_link_libraries(${PROJECT_NAME}_catch_test PUBLIC ${PROJECT_NAME} Catch)

add_executable(${PROJECT_NAME}_simple_test ${CMAKE_CURRENT_SOURCE_DIR}/testUTF8string.cpp)
target_link_libraries(${PROJECT_NAME}_simple_test PUBLIC ${PROJECT_NAME})
