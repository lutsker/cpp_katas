add_subdirectory(fizzbuzz)
add_subdirectory(fromroman)
add_executable(main main.cpp)
target_link_libraries(main fizzbuzz fromroman)

