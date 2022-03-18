#include "voronoi/generator/generate.hpp"
#include "voronoi/math/point2d.hpp"
#include "voronoi/math/rect2d.hpp"
#include <SDL.h>
#include <vector>

constexpr int screen_width = 800;
constexpr int screen_height = 600;

int main(int argc, char** argv) {
    std::vector<vo::math::point2d> field = vo::generator::generate_point_field(
        100, vo::math::rect2d{
                 .x1 = 0.0,
                 .y1 = 0.0,
                 .x2 = static_cast<double>(screen_width),
                 .y2 = static_cast<double>(screen_height),
             });

    (void)argc;
    (void)argv;
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow(
        "voronoi diagram", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        screen_width, screen_height, 0);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
