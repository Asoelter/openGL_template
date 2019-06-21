# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("rogue")

# Include sub-projects.
add_subdirectory ("rogue")
set_property(TARGET "rogue" PROPERTY CXX_STANDARD 17)
add_compile_options("-Wall; -Wextra; -pedantic")