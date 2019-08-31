cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(cpp_katas)

set (CMAKE_CXX_STANDARD 11)
enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
include_directories(externals)
