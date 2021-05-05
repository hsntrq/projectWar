#include "../object.hpp"
#pragma once

class CoinDigits : public Object
{
private:
    SDL_Rect digitRects[10];
    int num_1;
    int num_2;
    int num_3;
    int coinCounter;
public:
    CoinDigits();
    CoinDigits(int, int);
    CoinDigits(int coin);
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);
    void updateCoins();
    bool operator>(int price);
    CoinDigits &operator-=(const int price);
};