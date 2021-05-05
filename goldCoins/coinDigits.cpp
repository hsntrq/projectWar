#include "coinDigits.hpp"

void CoinDigits::draw(SDL_Renderer *gRenderer, SDL_Texture *assets) //selects  the sprite of the Button, updates it with drop function and then draws it
{
    moverRect.x += (20 - digitRects[num_3].w);
    moverRect.w = digitRects[num_3].w;
    moverRect.h = digitRects[num_3].h;
    SDL_RenderCopy(gRenderer, assets, &digitRects[num_3], &moverRect);
    moverRect.x += (digitRects[num_3].w + 20 - digitRects[num_2].w);
    moverRect.w = digitRects[num_2].w;
    moverRect.h = digitRects[num_2].h;
    SDL_RenderCopy(gRenderer, assets, &digitRects[num_2], &moverRect);
    moverRect.x += (digitRects[num_2].w + 20 - digitRects[num_1].w);
    moverRect.w = digitRects[num_1].w;
    moverRect.h = digitRects[num_1].h;
    SDL_RenderCopy(gRenderer, assets, &digitRects[num_1], &moverRect);
    moverRect.x = 427;
}

CoinDigits::CoinDigits(){}

CoinDigits::CoinDigits(int x, int y)
{
    digitRects[0] = {254, 795, 16, 22};
    digitRects[1] = {290, 794, 5, 24};
    digitRects[2] = {315, 796, 15, 20};
    digitRects[3] = {350, 795, 15, 22};
    digitRects[4] = {385, 794, 17, 24};
    digitRects[5] = {422, 794, 17, 24};
    digitRects[6] = {459, 794, 14, 24};
    digitRects[7] = {492, 794, 15, 24};
    digitRects[8] = {527, 794, 15, 24};
    digitRects[9] = {562, 794, 14, 24};
    moverRect.x = x;
    moverRect.y = y;
}

void CoinDigits::updateCoins(int num)
{
    num_1 = num % 10;
    num_2 = (num % 100) / 10;
    num_3 = num / 100;
}