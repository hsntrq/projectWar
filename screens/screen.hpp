#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include "../buttons/button.hpp"
#pragma once
class Screen
{
protected:
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;

public:
    Screen();
    Screen(SDL_Renderer *, SDL_Texture *);
    virtual void drawObjects() = 0;
    virtual int detectClick(int, int) = 0;
};