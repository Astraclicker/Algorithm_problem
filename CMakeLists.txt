set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}../)
cmake_minimum_required(VERSION 4.1)
project(Algorithm_problem)

set(CMAKE_CXX_STANDARD 20)

include_directories(
        include
        leetcode
)

add_executable(
        Algorithm_problem
        main.cpp
)