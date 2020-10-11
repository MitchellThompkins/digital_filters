# Test
################################################################################
include_directories(${PROJECT_SOURCE_DIR}/root_finder/include)
add_executable(root_finder.test ${CMAKE_CURRENT_SOURCE_DIR}/root_finder.test.cpp)
target_link_libraries(root_finder.test gtest_main root_finder)
create_test(root_finder.test)
