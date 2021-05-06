#include <SDL.h>
#include <iostream>
#include <string>
using namespace std;
#pragma once //only include once

/**
 * \brief Parent class of all objects that apper on screen; enemies, towers, base, projectiles
 */

class Object //parent class for all the actors (i.e. nest, egg, pigeon)
{
protected: //accessable in the child classes only
    SDL_Rect srcRect;
    SDL_Rect moverRect;

public:
    /**
     * Simple Default Constructor
     */
    Object();

    /**
     * Constructor that initializes attributes in response to paramter
     */
    Object(SDL_Rect m);

    /**
     * function for the child class if the object is to be deleted
     */
    Object(SDL_Rect s, SDL_Rect m);

    /**
     * Function to draw object on screen, overwritten where redefined
     */
    virtual void draw(SDL_Renderer *gRenderer, SDL_Texture *assets) = 0; //function for child class to draw the object
};
