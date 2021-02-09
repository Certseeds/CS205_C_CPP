add_library(${PROJECT_NAME}_CStereoShape
        SHARED
        ${CMAKE_CURRENT_SOURCE_DIR}/CStereoShape_lab13_01.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/CStereoShape_lab13_01.h)
add_library(${PROJECT_NAME}_CCube
        SHARED
        ${CMAKE_CURRENT_SOURCE_DIR}/CCube_lab13_02.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/CCube_lab13_02.h)
add_library(${PROJECT_NAME}_CSphere
        SHARED
        ${CMAKE_CURRENT_SOURCE_DIR}/CSphere_lab13_03.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/CSphere_lab13_03.h)

target_include_directories(${PROJECT_NAME}_CStereoShape
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(${PROJECT_NAME}_CCube
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(${PROJECT_NAME}_CSphere
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(${PROJECT_NAME}_CCube ${PROJECT_NAME}_CStereoShape)
target_link_libraries(${PROJECT_NAME}_CSphere ${PROJECT_NAME}_CStereoShape)

