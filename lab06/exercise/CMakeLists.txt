# header begin
cmake_minimum_required(VERSION 3.10.2)
project(lab06_exercise LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_CURRENT_LIST_DIR}/include)

set(SOURCE_FILES_LAB06_EXERCISE
        ./src/Book.cpp
        )

add_executable(${PROJECT_NAME}
        ${SOURCE_FILES_LAB06_EXERCISE}
#        ./src/read_books.cpp)
#        ./src/lab06_01.cpp)
#        ./src/lab06_02.cpp)
        ./src/lab06_03.cpp)