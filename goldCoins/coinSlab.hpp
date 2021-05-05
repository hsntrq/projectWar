#include "../object.hpp"
#pragma once

class CoinSlab : public Object
{
public:
    CoinSlab();
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);
};