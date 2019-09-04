set(TARGET_NAME calc)
set(LIB_SRC calc.cpp calc.hpp)

add_library(${TARGET_NAME} STATIC ${LIB_SRC})

# target_link_libraries(LIB OTHER_LIB)

target_include_directories(${TARGET_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS ${TARGET_NAME} ARCHIVE DESTINATION lib/)
