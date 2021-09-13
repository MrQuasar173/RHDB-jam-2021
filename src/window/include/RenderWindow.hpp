#ifndef RENDERWINDOW_HPP
#define RENDERWINDOW_HPP

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class RenderWindow
{
public:
    RenderWindow(const char *p_title, int p_width, int p_height);

private:
    SDL_Window *window;
    SDL_Renderer *renderer;
};

#endif //RENDERWINDOW_HPP