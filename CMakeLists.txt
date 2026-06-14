cmake_minimum_required(VERSION 4.2)
project(OOP_PR2_Tiles)

set(CMAKE_CXX_STANDARD 14)

include_directories(includes)

add_executable(OOP_PR2_Tiles
        includes/Tile.h
        src/Tile.cpp
        main.cpp)
