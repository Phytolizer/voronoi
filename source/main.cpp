#include <SDL.h>

int main(int argc, char** argv) {
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window =
        SDL_CreateWindow("voronoi diagram", SDL_WINDOWPOS_UNDEFINED,
                         SDL_WINDOWPOS_UNDEFINED, 800, 600, 0);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
