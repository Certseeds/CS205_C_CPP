set(target_name ${PROJECT_NAME}_INCLUDE)

add_library(${target_name} INTERFACE)
target_include_directories(${target_name}
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR})


add_library(${target_name}_IMPL INTERFACE)
target_include_directories(${target_name}_IMPL
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR})
unset(${target_name})
