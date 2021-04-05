cmake_minimum_required(VERSION 3.15)


project(sample LANGUAGES CXX)

#
# Prevent building in the source directory
#

if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
  message(FATAL_ERROR "Building in the main project directory is not allowed. Please make a new directory (called a build directory) and run CMake from there.\n")
endif()

set(CMAKE_CXX_STANDARD 17 CACHE STRING "C++ version selection")  # or 11, 14, 17, 20
set(CMAKE_CXX_STANDARD_REQUIRED ON)  # optional, ensure standard is supported


#
# Building the project
#
include_directories(include)

set(SAMPLE_SOURCES
    src/sample.cpp
)

add_library(sample SHARED ${SAMPLE_SOURCES})

#
# Build test
#

enable_testing()

# Make test executable
add_executable(tests ${CMAKE_SOURCE_DIR}/test/test_add_vectors.cpp)
target_include_directories(tests PUBLIC ${CMAKE_SOURCE_DIR}/external/doctest/doctest)
target_link_libraries(tests PRIVATE sample)
add_test(NAME test_add_vector COMMAND tests)