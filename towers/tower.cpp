#include "tower.hpp"

// pigeon implementation will go here.

void Tower::draw(SDL_Renderer *gRenderer, SDL_Texture *assets) //selects  the sprite of the Tower, updates it with drop function and then draws it
{
    //srcRect = srcSprite;
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
}

Tower::Tower(int x, int y) //constructor which initiates the Tower at location (x, y)
{
    // it will display Tower on (x, y) location, the size of pigeon is 25 width, 35 height
    moverRect = {x, y, 100, 100};
}

Tower::Tower() //default constructor
{
    // it will display Tower on x = 30, y = 40 location, the size of pigeon is 25 width, 35 height
    moverRect = {30, 40, 25, 35};
}
std::tuple<int, int> Tower::checkEnemyInRange(std::list<Enemy *> &enemies)
{
    int minDistance = 10000;
    double distance;
    std::tuple<int, int> location = std::make_tuple(NULL, NULL);
    for (auto enemy : enemies)
    {
        auto [x, y, w, h] = enemy->location();
        x += w/2;
        y += h/2;
        distance = ((x - moverRect.x+48) ^ 2 + (y - moverRect.y+48) ^ 2) ^ (1 / 2);
        if (towerAttackRange > distance)
        {
            if (minDistance > distance)
            {
                minDistance = distance;
                location = std::make_tuple(x, y);
            }
        }
    }
    return location;
}

void Tower::fireProjectile(int x, int y, std::list<Projectile *> &projectiles)
{
    int srcX = moverRect.x + moverRect.w/2;
    int srcY = moverRect.y + moverRect.h/2;
    if (towerID == 0) projectiles.push_back(new FireTowerProjectile(srcX, srcY, x, y, towerAttackDamage));
    if (towerID == 1) projectiles.push_back(new BombTowerProjectile(srcX, srcY, x, y, towerAttackDamage));
    if (towerID == 2) projectiles.push_back(new IceTowerProjectile(srcX, srcY, x, y, towerAttackDamage));
    if (towerID == 3) projectiles.push_back(new LongBowTowerProjectile(srcX, srcY, x, y, towerAttackDamage));
}