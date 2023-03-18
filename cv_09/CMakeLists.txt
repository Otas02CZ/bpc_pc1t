# CMakeList.txt : CMake project for 24755_vector, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("24755_vector")

# Add source to this project's executable.
add_executable (24755_vector "24755_vector.cpp" "24755_vector.h" "VectorMath.h" "VectorMath.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET 24755_vector PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
