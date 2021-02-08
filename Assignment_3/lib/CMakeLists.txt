add_library(${PROJECT_NAME}_utf8
        SHARED
        ${CMAKE_CURRENT_SOURCE_DIR}/utf8.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/utf8.hpp)
set_source_files_properties(${CMAKE_CURRENT_SOURCE_DIR}/utf8.cpp PROPERTIES LANGUAGE CXX)

target_include_directories(${PROJECT_NAME}_utf8
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR})

