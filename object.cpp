#include "object.hpp"

Object::Object() {}                          //default constructor
Object::Object(SDL_Rect m) : moverRect(m) {} //overloaded constructors
Object::Object(SDL_Rect s, SDL_Rect m) : moverRect(m), srcRect(s) {}
