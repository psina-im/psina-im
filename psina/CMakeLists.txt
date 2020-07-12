
find_package(Qt5 COMPONENTS "Widgets")

add_executable(psina
               main.cpp
               main_window.cpp
               main_window.hpp)

target_link_libraries(psina PRIVATE cxxim Qt5::Widgets)
target_link_libraries(psina PRIVATE cxxim Boost::program_options)
