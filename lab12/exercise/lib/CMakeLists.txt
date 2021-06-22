add_library(${PROJECT_NAME}_Complex
        ${LIB_WAY}
        ${CMAKE_CURRENT_SOURCE_DIR}/complex_.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/complex_.h)
add_library(${PROJECT_NAME}_Number
        ${LIB_WAY}
        ${CMAKE_CURRENT_SOURCE_DIR}/number_.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/number_.h)

target_include_directories(${PROJECT_NAME}_Complex
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(${PROJECT_NAME}_Number
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR})