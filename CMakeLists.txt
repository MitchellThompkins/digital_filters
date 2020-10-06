cmake_minimum_required(VERSION 3.10.2)

project(digital_filters)

set(CMAKE_CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/tools/cmake)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/output/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/output/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/output/bin)

# TODO Doxygen
# TODO include what you use

#include(compiler_warnings)

include(get_google_test)
get_google_test()

enable_testing()

macro(create_test target)
    add_test(NAME ${target} COMMAND ${target})
endmacro()

add_subdirectory(hello_world)
