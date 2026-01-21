cmake_minimum_required(VERSION 3.28)
project(std_module_example CXX)

set(CMAKE_CXX_STANDARD 20)

add_library(foo)

target_sources(foo
  PUBLIC
    FILE_SET CXX_MODULES FILES
      foo.cxx
)

add_executable(hello main.cxx)

target_link_libraries(hello foo)
