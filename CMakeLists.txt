cmake_minimum_required(VERSION 3.20)

project(
    "voronoi"
    LANGUAGES CXX
    VERSION "0.1.0"
    DESCRIPTION "Voronoi diagram generator"
    HOMEPAGE_URL "https://github.com/Phytolizer/voronoi"
)

find_package(SDL2 REQUIRED)

set(SRC_REL main.cpp delaunay/delaunay.cpp generator/generate.cpp
            graph/graph.cpp
)
foreach(FILE ${SRC_REL})
    cmake_path(ABSOLUTE_PATH FILE BASE_DIRECTORY source NORMALIZE)
    list(APPEND SRC ${FILE})
endforeach()
add_executable(voronoi ${SRC})
target_compile_features(voronoi PRIVATE cxx_std_20)
target_include_directories(voronoi PRIVATE include)
target_link_libraries(voronoi PRIVATE SDL2::SDL2 SDL2::SDL2main)
