#include <SDL.H>
#pragma once //only include once
class Object //parent class for all the actors (i.e. nest, egg, pigeon)
{
protected: //accessable in the child classes only
    SDL_Rect srcRect;
    SDL_Rect moverRect;

public:
    Object();           //default constructor
    Object(SDL_Rect m); //overloaded constructors
    Object(SDL_Rect s, SDL_Rect m);                              //function for the child class if the object is to be deleted
    virtual void draw(SDL_Renderer *gRenderer, SDL_Texture *assets) = 0; //function for child class to draw the object
};
