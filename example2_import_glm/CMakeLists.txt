cmake_minimum_required(VERSION 4.1)

set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "d0edc3af-4c50-42ea-a356-e2862fe7a444")

project(import_glm_example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_MODULE_STD ON)

find_package(glm REQUIRED)

add_library(glm_module STATIC)

target_sources(glm_module PUBLIC
    FILE_SET CXX_MODULES 
    BASE_DIRS "/usr/include/glm" 
    FILES "/usr/include/glm/glm.cppm"
)
target_link_libraries(glm_module PRIVATE glm::glm)

add_executable(hello main.cxx)

target_link_libraries(hello PRIVATE glm_module)