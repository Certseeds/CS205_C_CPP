include(ProcessorCount)
ProcessorCount(N)
if(NOT N EQUAL 0)
    MESSAGE("parallel ${N}")
    set(CMAKE_BUILD_PARALLEL_LEVEL ${N})
endif()