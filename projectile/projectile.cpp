#include "projectile.hpp"
#include <cstdlib>

void Projectile::draw(SDL_Renderer *gRenderer, SDL_Texture *assets) //selects  the sprite of the Tower, updates it with drop function and then draws it
{
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
}

Projectile::Projectile(int x, int y, int tx, int ty) : targetX(tx), targetY(ty) //constructor which initiates the Projectile at location (x, y)
{
    moverRect = {x, y, 50, 60}; // initializing the projectile to appear at of the tower turret
    gradient = 0;
}

Projectile::Projectile() //constructor which initiates the Projectile at location (x, y)
{
    moverRect = {10, 10, 50, 60}; // initializing the projectile to appear at of the tower turret
}

Projectile::~Projectile() {}

void Projectile::handleCollision(std::list<Enemy *> &enemies)
{
    for (list<Enemy *>::iterator enemy = enemies.begin(); enemy != enemies.end(); ++enemy)
    {
        auto [x, y, w, h] = (*enemy)->location();
        SDL_Rect enemyRect = {x, y, w, h};
        if (SDL_HasIntersection (&enemyRect, &moverRect))
        {
            reachedTarget = true;
            (*enemy)->healthCalculation(damage);
            if ((*enemy)->death)
            {
                delete (*enemy);
                enemies.erase(enemy--);
            }
        }
    }
}

void Projectile::shoot()
{
    
    if (gradient > 0)
    {
        if (moverRect.x >= 1280 - moverRect.w && moverRect.x <= moverRect.w && moverRect.y >= 736 - moverRect.h && moverRect.y <= moverRect.h)
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
            if (addX)
            {
                moverRect.x += 3 * gradient;
            }
            else
            {
                moverRect.x -= 3 * gradient;
            }
            if (addY)
            {
                moverRect.y += 3;
            }
            else
            {
                moverRect.y -= 3;
            }
        }
        else
        {
            if (addX)
            {
                moverRect.x += 3;
            }
            else
            {
                moverRect.x -= 3;
            }
            if (addY)
            {
                moverRect.y += 3 * gradient;
            }
            else
            {
                moverRect.y -= 3 * gradient;
            }
        }
    }
    else
    {
        if (abs(targetX - moverRect.x) > abs(targetY - moverRect.y))
        {
            xIsBigger = true;
            gradient = abs((targetX - moverRect.x) / (targetY - moverRect.y + 0.000001));
        }
        else
        {
            xIsBigger = false;
            gradient = abs((targetY - moverRect.y) / (targetX - moverRect.x + 0.000001));
        }
        // if (gradient > 7)
        // {
        //     gradient = 7;
        // }
        if (moverRect.x < targetX)
        {
            addX = true;
        }
        else
        {
            addX = false;
        }
        if (moverRect.y < targetY)
        {
            addY = true;
        }
        else
        {
            addY = false;
        }
    }
}