#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

// must complie with -lSDL flag

int main(int argc, char* args[]) {
    // initialize SDL and SDL_IMAGE, check for failure
    if (SDL_Init(SDL_INIT_VIDEO) > 0) { 
        std::cout << "SDL_INIT FAILED: " << SDL_GetError() << std::endl;
    }

    if (! (IMG_Init(IMG_INIT_PNG))) {
        std::cout << "IMG_INIT FAILED: " << SDL_GetError() << std::endl;
    }

    
    return 0;



}
