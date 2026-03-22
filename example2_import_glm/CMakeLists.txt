cmake_minimum_required(VERSION 3.28)

project(import_glm_example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

find_package(glm 1.0.1 REQUIRED)

add_library(glm_module STATIC)

target_sources(glm_module PUBLIC
    FILE_SET CXX_MODULES
    BASE_DIRS "/usr/include/glm"
    FILES "/usr/include/glm/glm.cppm"
)
target_link_libraries(glm_module PRIVATE glm::glm)

add_executable(hello main.cxx)

target_link_libraries(hello PRIVATE glm_module)
