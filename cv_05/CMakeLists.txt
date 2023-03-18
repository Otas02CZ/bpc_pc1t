# CMakeList.txt : CMake project for CV_5, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("CV_5")

# Add source to this project's executable.
add_executable (CV_5 "CV_5.cpp" "CV_5.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CV_5 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
