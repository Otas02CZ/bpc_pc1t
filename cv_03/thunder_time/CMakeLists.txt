# CMakeList.txt : CMake project for only_c, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("only_c")

# Add source to this project's executable.
add_executable (only_c "only_c.cpp" "only_c.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET only_c PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
