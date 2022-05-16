cmake_minimum_required(VERSION 3.16.3)
project(Example)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(
    "include"
)

set(
    SOURCE_FILES     
    "src/example.cpp"
    "src/main.cpp"
)

add_executable(
    example
    ${SOURCE_FILES}
)