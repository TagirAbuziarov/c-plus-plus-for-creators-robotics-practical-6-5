cmake_minimum_required(VERSION 3.16)
project(
    Matrix
    VERSION 0.0.1
    DESCRIPTION "Matrix class"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE Debug)

add_executable(car_class)

set(sources 
    src/matrix.h
    src/matrix.cpp
    src/main.cpp
)

target_sources(car_class PRIVATE ${sources})

target_include_directories(car_class
    PUBLIC
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"    
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>"    
) 
