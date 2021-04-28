#include "projectile.hpp"
#include <cstdlib>

void Projectile::draw(SDL_Renderer *gRenderer, SDL_Texture *assets) //selects  the sprite of the Tower, updates it with drop function and then draws it
{
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
}

Projectile::Projectile(int x, int y) //constructor which initiates the Projectile at location (x, y)
{   
    moverRect = {x, y, 50, 60}; // initializing the projectile to appear at of the tower turret
}

Projectile::Projectile() //constructor which initiates the Projectile at location (x, y)
{   
    moverRect = {10, 10, 50, 60}; // initializing the projectile to appear at of the tower turret
}

Projectile::~Projectile(){}

void Projectile::shoot(int targetX, int targetY)
{
    int gradient;

    if (abs(targetX - moverRect.x) > abs(targetY - moverRect.y))
    {
        xIsBigger = true;
        gradient = abs(targetX - moverRect.x) / abs(targetY - moverRect.y);
    }
    else
    {
        xIsBigger = false;
        gradient = abs(targetY - moverRect.y) / abs(targetX - moverRect.x);
    }

    if (gradient > 9)
    {
        gradient = 9;
    }
    
    if (moverRect.x >= targetX-20 && moverRect.x <= targetX+20)
    {
        reachedTarget = true;
        return; 
    }
    else
    {
        reachedTarget = false;
    }

    if (xIsBigger)
    {
        if (moverRect.x > targetX)
        {
            moverRect.x -= 3*gradient;
        }
        else
        {
            moverRect.x += 3*gradient;
        }
        if (moverRect.y > targetY)
        {        
            moverRect.y -= 3;
        }
        else
        {
            moverRect.y += 3;
        }
    }
    else
    {
        if (moverRect.x > targetX)
        {
            moverRect.x -= 3;
        }
        else
        {
            moverRect.x += 3;
        }
        if (moverRect.y > targetY)
        {        
            moverRect.y -= 3*gradient;
        }
        else
        {
            moverRect.y += 3*gradient;
        }
    }
}