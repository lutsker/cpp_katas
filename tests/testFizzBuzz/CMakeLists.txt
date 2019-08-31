set(TARGET_NAME test_fizzbuzz)
file(GLOB SRC test*.cpp)
add_executable(${TARGET_NAME} main.cpp ${SRC})
target_link_libraries(${TARGET_NAME} PUBLIC fizzbuzz Catch2::Catch2)
#add_test(NAME ${TARGET_NAME} COMMAND ${TARGET_NAME} -o report.xml -r junit)
add_test(NAME ${TARGET_NAME} COMMAND ${TARGET_NAME})

