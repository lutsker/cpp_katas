cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(cpp_katas)

set (CMAKE_CXX_STANDARD 11)
set (CMAKE_EXPORT_COMPILE_COMMANDS ON)
enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
