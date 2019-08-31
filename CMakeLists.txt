cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(cpp_katas)

find_package(Catch2 REQUIRED)
enable_testing()

add_subdirectory(src)
add_subdirectory(tests)

