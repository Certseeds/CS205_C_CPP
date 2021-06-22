cmake_minimum_required(VERSION 3.14.5)
PROJECT(${PROJECT_NAME}_lab10_opencv_demo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab10_main_test ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp )
target_link_libraries(lab10_main_test ${OpenCV_LIBS})

add_executable(lab10_line_detection ${CMAKE_CURRENT_SOURCE_DIR}/line_detection.cpp)
target_link_libraries(lab10_line_detection ${OpenCV_LIBS})

add_executable(lab10_detect_circles ${CMAKE_CURRENT_SOURCE_DIR}/detect_circles.cpp)
target_link_libraries(lab10_detect_circles ${OpenCV_LIBS})

add_executable(lab10_detect_face ${CMAKE_CURRENT_SOURCE_DIR}/detect_face.cpp)
target_link_libraries(lab10_detect_face ${OpenCV_LIBS})