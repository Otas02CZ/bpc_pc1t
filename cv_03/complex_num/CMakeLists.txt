# CMakeList.txt : CMake project for complex_num, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("complex_num")

# Add source to this project's executable.
add_executable (complex_num "complex_num.cpp" "complex_num.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET complex_num PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
