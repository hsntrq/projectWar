#include "coinSlab.hpp"

void CoinSlab::draw(SDL_Renderer *gRenderer, SDL_Texture *assets) //selects  the sprite of the Button, updates it with drop function and then draws it
{
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
}

CoinSlab::CoinSlab()
{
    moverRect = {390, 680, 105, 43};
    srcRect = {15, 568, 105, 43};
}