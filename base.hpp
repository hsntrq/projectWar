#include "object.hpp"
#pragma once

class Base: public Object
{
private:
    SDL_Rect greenStrip;
    SDL_Rect greenMoverRect;

    SDL_Rect redStrip;
    SDL_Rect redMoverRect;

    int greenRectWidth;

public:
    int health;
    Base();
    ~Base();
    void decreaseHealth(int);
    void increaseHealth(int);
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);
    Base &operator+=(int);
};
