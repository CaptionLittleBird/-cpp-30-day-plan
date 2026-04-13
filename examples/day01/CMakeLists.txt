cmake_minimum_required(VERSION 3.10)
project(day01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(day01 src/main.cpp)

# Find SFML (system, window, graphics)
find_package(SFML 2.5 COMPONENTS system window graphics audio REQUIRED)
target_link_libraries(day01 PRIVATE sfml-system sfml-window sfml-graphics sfml-audio)
target_compile_options(day01 PRIVATE -Wall -Wextra)