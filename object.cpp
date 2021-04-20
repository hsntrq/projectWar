#include "object.hpp"

Object::Object() {}                          //default constructor
Object::Object(SDL_Rect m) : moverRect(m) {} //overloaded constructors
Object::Object(SDL_Rect s, SDL_Rect m) : moverRect(m), srcRect(s) {}
SDL_Rect Object::Mover() //returns currents position of the object
{
    return moverRect;
}