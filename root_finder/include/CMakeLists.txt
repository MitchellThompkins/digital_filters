# Library
################################################################################
add_library(root_finder INTERFACE)
target_include_directories(root_finder INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(root_finder_main main.cpp)
