add_subdirectory(fizzbuzz)
add_subdirectory(fromroman)
add_subdirectory(calc)
add_executable(main main.cpp)
target_link_libraries(main fizzbuzz fromroman calc)

