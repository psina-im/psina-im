
find_package(Qt5 COMPONENTS "Widgets")

add_executable(psina main.cpp)

target_link_libraries(psina PRIVATE cxxim cxxim-ui-qt)
target_link_libraries(psina PRIVATE Boost::program_options)
