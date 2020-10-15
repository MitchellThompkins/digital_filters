# Library
################################################################################
add_library(root_finder INTERFACE)
target_include_directories(root_finder INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
#target_include_directories(gcem)

include_directories(${PROJECT_SOURCE_DIR}/build/debug/include)

add_executable(root_finder_main main.cpp)
#target_link_libraries(root_finder_main gcem)
