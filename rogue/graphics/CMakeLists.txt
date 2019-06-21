cmake_minimum_required (VERSION 3.8)

#project(graphics)

set(GLFW_BUILD_DOCS     OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS	OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_library (graphics vertex_buffer.h vertex_buffer.cpp)

target_link_libraries(graphics PRIVATE glfw)
target_link_libraries(graphics PUBLIC glad)

target_include_directories(graphics PUBLIC glfw)
target_include_directories(graphics PUBLIC glad)