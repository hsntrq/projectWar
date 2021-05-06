#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include "../buttons/button.hpp"
#pragma once
/**
 * \brief This class is the parent class of all the screens in the game
 */
class Screen
{
protected:
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;
    int state;

public:
    /**
     * Simple constructor, doesn't initialize anything
     */
    Screen();

    /**
     * Simple constructor, initalizes the gRenderer and assests attributes
     */
    Screen(SDL_Renderer *, SDL_Texture *);
    
    /**
     * draws objects to screen, overwritten in child classes
     */
    virtual int drawObjects() = 0;
    
    /**
     * detects where a click has been done
     */
    virtual void detectClick(int, int) = 0;
};