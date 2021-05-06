#include "../object.hpp"
#include <list>
#include "../enemies/enemy.hpp"
#pragma once

/**
 * \brief Parent class of all projectiles, stores methods and attributes common to them all
 */

class Projectile : public Object
{
protected:
    int damage;
    int gradient;
    bool xIsBigger;
    bool addX, addY;
    int targetX, targetY;

public:
    bool reachedTarget;
    Projectile();
    /**
     * Simple constructor that initilizes the x and y locations of the projectile
     * \param x is projectile's x location
     * \param y is projectile's y location
     */
    Projectile(int x, int y, int tx, int ty);
    /**
     * Simple destructor
     */
    ~Projectile();
    /**
     * Function to shoot the projectile, overwritten in child classes (in this case, the towers)
     */
    void shoot();
    void handleCollision(std::list<Enemy *> &enemies);
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);
};