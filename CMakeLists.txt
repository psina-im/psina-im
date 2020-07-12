project(psina-im)
cmake_minimum_required(VERSION 3.0)


set(boost_libraries
    system
    program_options)
include(FindBoost)
find_package(Boost 1.64 REQUIRED COMPONENTS ${boost_libraries}) 


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/bin")

add_subdirectory(libcxxim)
add_subdirectory(psina)
