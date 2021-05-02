#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>

class Screen
{
protected:
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;

public:
    Screen();
    Screen(SDL_Renderer *, SDL_Texture *);
    virtual void drawObjects() = 0;
    virtual void detectClick(int, int) = 0;
};