#
# Build test
#

# Make test executable
add_executable(tests ${CMAKE_SOURCE_DIR}/test/test_add_vectors.cpp)
target_link_libraries(tests PRIVATE sample)
add_test(NAME test_add_vector COMMAND tests)
