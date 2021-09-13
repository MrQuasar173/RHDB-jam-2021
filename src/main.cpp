#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "window/include/RenderWindow.hpp"

// must complie with -lSDL flag if using G++ or Clang. Meson will still work normally.
int main(int argc, char* args[]) {
    // initialize SDL and SDL_IMAGE, check for failure
    if (SDL_Init(SDL_INIT_VIDEO) > 0) { 
        std::cout << "SDL_INIT FAILED: " << SDL_GetError() << std::endl;
    }

    if (! (IMG_Init(IMG_INIT_PNG))) {
        std::cout << "IMG_INIT FAILED: " << SDL_GetError() << std::endl;
    }

    // initialize a window. code in RenderWindow.cpp
    RenderWindow window("Jam game alpha v0.1", 1920, 1080);
    
   

    
    return 0;



}
