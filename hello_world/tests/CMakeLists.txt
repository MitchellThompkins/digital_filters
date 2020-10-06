# Test
################################################################################
add_executable(hello_world.test ${CMAKE_CURRENT_SOURCE_DIR}/hello_world.test.cpp)
target_link_libraries(hello_world.test gtest_main hello_world)
create_test(hello_world.test)
