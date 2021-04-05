# Sciware Testing Examples and Exercises

[![](https://github.com/flatironinstitute/sciware-testing-cpp/actions/workflows/cmake.yml/badge.svg)](https://github.com/flatironinstitute/sciware-testing-cpp/actions/workflows/cmake.yml/)
[![codecov](https://codecov.io/gh/flatironinstitute/sciware-testing-cpp/branch/main/graph/badge.svg?token=99NU99TVDH)](https://codecov.io/gh/flatironinstitute/sciware-testing-cpp)

This is an example repository for writing tests, for the Sciware Testing session.


## Quick-start

### Software Prerequisites

- [`cmake`](https://cmake.org/download/)
- C++ compiler with C++17 support (or higher)

### Build
```bash
git clone --recursive git@github.com:flatironinstitute/sciware-testing-cpp.git
cd sciware-testing-cpp
mkdir build && cd build
cmake ..
make
make test
```


## Credit
A large portion of this project was inspired by and borrowed from @filipdetescu's project [`modern-cpp-template`](https://github.com/filipdutescu/modern-cpp-template).