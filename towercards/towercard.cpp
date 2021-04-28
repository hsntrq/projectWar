#include "towercard.hpp"

// pigeon implementation will go here.

void TowerCard::draw(SDL_Renderer *gRenderer, SDL_Texture *assets) //selects  the sprite of the TowerCard, updates it with drop function and then draws it
{
    //srcRect = srcSprite;
    srcRect = srcSprite[isSelected];
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
}

bool TowerCard::isClicked(int x, int y)
{
    return x >= moverRect.x && x <= moverRect.x + moverRect.w && y >= moverRect.y && y <= moverRect.y + moverRect.h;
}

TowerCard::TowerCard(int x, int y) //constructor which initiates the TowerCard at location (x, y)
{
    // it will display TowerCard on (x, y) location, the size of pigeon is 25 width, 35 height
    moverRect = {x, y, 100, 100};
}

TowerCard::TowerCard() //default constructor
{
    // it will display TowerCard on x = 30, y = 40 location, the size of pigeon is 25 width, 35 height
    moverRect = {30, 40, 25, 35};
}
