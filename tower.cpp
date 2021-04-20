#include "tower.cpp"

// pigeon implementation will go here.

void Tower::draw(SDL_Renderer *gRenderer, SDL_Texture *assets) //selects  the sprite of the Tower, updates it with drop function and then draws it
{
    srcRect = srcSprite[hatched];
    drop(gRenderer, assets);
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
}

Tower::Tower(int x, int y) //constructor which initiates the Tower at location (x, y)
{
    // it will display Tower on (x, y) location, the size of pigeon is 25 width, 35 height
    moverRect = {x, y, 25, 35};
}

Tower::Tower() //default constructor
{
    // it will display Tower on x = 30, y = 40 location, the size of pigeon is 25 width, 35 height
    moverRect = {30, 40, 25, 35};
}
