#include "enemy.hpp"


void Enemy::draw(SDL_Renderer *gRenderer, SDL_Texture *assets) //selects  the sprite of the Enemy, updates it with drop function and then draws it
{
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
}

Enemy::Enemy(int x, int y) //constructor which initiates the Enemy at location (x, y)
{
    // it will display Enemy on (x, y) location, the size of pigeon is 25 width, 35 height
    moverRect = {x, y, 25, 35};
}

Enemy::Enemy() //default constructor
{
    // it will display Enemy on x = 30, y = 40 location, the size of pigeon is 25 width, 35 height
    moverRect = {30, 40, 25, 35};
}
