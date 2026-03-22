cmake_minimum_required(VERSION 4.1)

if(CMAKE_VERSION VERSION_GREATER_EQUAL "4.3")
    set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "451f2fe2-a8a2-47c3-bc32-94786d8fc91b")
else()
    set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "d0edc3af-4c50-42ea-a356-e2862fe7a444")
endif()

project(import_std_example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_MODULE_STD ON)

add_executable(hello main.cxx)
