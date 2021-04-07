# Sciware Testing Examples and Exercises

[![](https://github.com/flatironinstitute/sciware-testing-cpp/actions/workflows/cmake.yml/badge.svg)](https://github.com/flatironinstitute/sciware-testing-cpp/actions/workflows/cmake.yml/)
[![codecov](https://codecov.io/gh/flatironinstitute/sciware-testing-cpp/branch/main/graph/badge.svg?token=99NU99TVDH)](https://codecov.io/gh/flatironinstitute/sciware-testing-cpp)

This is an example repository for writing tests, for the Sciware Testing session.


## Quick-start

### Software Prerequisites

- [`cmake`](https://cmake.org/download/)
- C++ compiler with C++11 support (or higher)

### Build
```bash
git clone https://github.com/flatironinstitute/sciware-testing-cpp.git
cd sciware-testing-cpp
mkdir build && cd build
cmake ..
make
make test
```

## Forking This Project

If you fork this project you should do the following things to make sure that your fork is correctly linked to your GitHub account:

1.  If you haven't linked your GitHub account to [`codecov`](https://about.codecov.io/), do so now.
2.  Change the badge URL at the top of `README.md` to point to your GitHub workflow build . To do this, replace `flatironinstitute` with your GitHub handle in the URLs of the badge.
3.  Change the badge URL at the top of `README.md` to point to your [`codecov`](https://about.codecov.io/) report. Go to [`codecov`](https://about.codecov.io/), navigate to the `sciware-testing-cpp` project, then go to Settings > Badge.
4.  Change your [`codecov`](https://about.codecov.io/) token in your GitHub actions file (`sciware-testing-cpp/.github/workflows/cmake.yml`). To get your token go to [`codecov`](https://about.codecov.io/), navigate to the `sciware-testing-cpp` project, then go to Settings > General > `Repository Upload Token`. Copy this token and use it to set the `CODECOV_TOKEN` variable in `sciware-testing-cpp/.github/workflows/cmake.yml`.


## Credit
A large portion of this project was inspired by and borrowed from @filipdetescu's project [`modern-cpp-template`](https://github.com/filipdutescu/modern-cpp-template).
