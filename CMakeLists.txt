cmake_minimum_required(VERSION 3.20)

project(
    "voronoi"
    LANGUAGES CXX
    VERSION "0.1.0"
    DESCRIPTION "Voronoi diagram generator"
    HOMEPAGE_URL "https://github.com/Phytolizer/voronoi"
)

set(SRC_REL main.cpp)
foreach(FILE ${SRC_REL})
    cmake_path(ABSOLUTE_PATH FILE BASE_DIRECTORY source NORMALIZE)
    list(APPEND SRC ${FILE})
endforeach()
add_executable(voronoi ${SRC})
