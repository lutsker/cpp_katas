set(TARGET_NAME fizzbuzz)
set(LIB_SRC fizzbuzz.cpp fizzbuzz.hpp)

add_library(${TARGET_NAME} STATIC ${LIB_SRC})

# target_link_libraries(LIB OTHER_LIB)

target_include_directories(${TARGET_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS ${TARGET_NAME} ARCHIVE DESTINATION lib/)
