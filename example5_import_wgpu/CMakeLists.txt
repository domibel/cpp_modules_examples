cmake_minimum_required(VERSION 4.1)

if(CMAKE_VERSION VERSION_LESS "4.3")
    set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "d0edc3af-4c50-42ea-a356-e2862fe7a444")
elseif(CMAKE_VERSION VERSION_LESS "4.4")
    set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "451f2fe2-a8a2-47c3-bc32-94786d8fc91b")
elseif(CMAKE_VERSION VERSION_LESS "4.5")
    set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "f35a9ac6-8463-4d38-8eec-5d6008153e7d")
endif()

project(import_dawn_example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_MODULE_STD ON)

find_package(Dawn REQUIRED)
target_compile_features(dawn::cpp_module INTERFACE cxx_std_23)

add_executable(hello main.cxx)
target_link_libraries(hello PRIVATE dawn::cpp_module dawn::webgpu_dawn)
