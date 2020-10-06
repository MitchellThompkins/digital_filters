# Library
################################################################################
include_directories(${PROJECT_SOURCE_DIR}/hello_world/include)
add_library(hello_world INTERFACE)
target_include_directories(hello_world INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
