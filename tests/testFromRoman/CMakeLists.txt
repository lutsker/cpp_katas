set(TARGET_NAME test_fromroman)
file(GLOB SRC test*.cpp)
add_executable(${TARGET_NAME} main.cpp ${SRC})
target_link_libraries(${TARGET_NAME} PUBLIC fromroman)
target_include_directories(${TARGET_NAME} PUBLIC "${PROJECT_SOURCE_DIR}/externals")
#add_test(NAME ${TARGET_NAME} COMMAND ${TARGET_NAME} -o report.xml -r junit)
add_test(NAME ${TARGET_NAME} COMMAND ${TARGET_NAME})

