#include "projectile.hpp"

void Projectile::draw(SDL_Renderer *gRenderer, SDL_Texture *assets) //selects  the sprite of the Tower, updates it with drop function and then draws it
{
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
}

Projectile::Projectile(int x, int y) //constructor which initiates the Tower at location (x, y)
{
    srcRect = approaching; // initializing sprite
    
    moverRect = {x, y, 50, 60}; // initializing the projectile to appear at of the tower turret
}

Projectile::~Projectile(){}

void Projectile::shoot(int targetX, int targetY)
{
    if ((moverRect.x < targetX+5 && moverRect.x > targetX-5) && (moverRect.y < targetY+5 && moverRect.y > targetY-5))
    {
        srcRect = landed;
        reachedTarget = true;
        return;
    }
    else
    {
        if (moverRect.x > targetX)
        {
            moverRect.x -= 1;
        }
        else
        {
            moverRect.x += 1;
        }

        if (moverRect.y > targetY)
        {
            moverRect.y -= 1;
        }
        else
        {
            moverRect.y += 1;
        }
    }
}