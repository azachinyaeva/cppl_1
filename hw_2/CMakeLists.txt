cmake_minimum_required (VERSION 3.8)

project ("hw_2")

add_executable (hw_2 "hw_2.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET hw_2 PROPERTY CXX_STANDARD 20)
endif()

