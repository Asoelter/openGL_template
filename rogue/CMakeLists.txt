# CMakeList.txt : CMake project for rogue, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

add_subdirectory("graphics")
add_subdirectory("vendor/glfw")
add_subdirectory("vendor/glad")

include_directories("vendor/glad")
include_directories("vendor/glad/include/")
include_directories("vendor/glad/src")
include_directories("vendor/glfw/include")

# Add source to this project's executable.
add_executable (rogue "main.cpp")
target_link_libraries(rogue PUBLIC graphics)
target_include_directories(rogue PUBLIC graphics)