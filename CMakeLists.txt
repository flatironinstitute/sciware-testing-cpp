cmake_minimum_required(VERSION 3.15)


project(sample LANGUAGES CXX)

#
# Prevent building in the source directory
#

if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
  message(FATAL_ERROR "Building in the main project directory is not allowed. Please make a new directory (called a build directory) and run CMake from there.\n")
endif()

#
# Options
#

set(CMAKE_CXX_STANDARD 11 CACHE STRING "C++ version selection")  # or 11, 14, 17, 20
set(CMAKE_CXX_STANDARD_REQUIRED ON)  # optional, ensure standard is supported

# TODO: Need to update this for other compilers
set(CMAKE_CXX_FLAGS_DEBUG "-g --coverage")
# set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE ON)

#
# Building the project
#
include_directories(include)

set(SAMPLE_SOURCES
    src/sample.cpp
)

add_library(sample SHARED ${SAMPLE_SOURCES})
target_link_libraries(sample "--coverage")

#
# Build test
#

# Make sure `enable_testing()` is in the top CMakeLists.txt file
# For more details see https://cmake.org/cmake/help/latest/command/enable_testing.html#command:enable_testing

enable_testing() 
add_subdirectory(test)

#
# Code Coverage
#

# setup_target_for_coverage_fastcov(${PROJECT_NAME}_coverage test_add_vector coverage)
