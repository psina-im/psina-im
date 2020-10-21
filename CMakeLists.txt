project(psina-im)
cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 20)

set(boost_libraries
    system
    program_options)
include(FindBoost)
find_package(Boost 1.64 REQUIRED COMPONENTS ${boost_libraries}) 


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/bin")

add_subdirectory(libcxxim)
add_subdirectory(libcxxim/cxxim/ui/qt)
add_subdirectory(psina)
