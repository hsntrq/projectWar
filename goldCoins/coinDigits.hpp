#include "../object.hpp"
#pragma once

class CoinDigits : public Object
{
private:
    SDL_Rect digitRects[10];
    int num_1;
    int num_2;
    int num_3;
public:
    CoinDigits();
    CoinDigits(int, int);
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);
    void updateCoins(int num);
};