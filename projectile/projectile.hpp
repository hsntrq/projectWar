#include "../object.hpp"
#pragma once

/**
 * \brief Parent class of all projectiles, stores methods and attributes common to them all
 */

class Projectile : public Object
{
protected:
    int gradient = 0;
    bool xIsBigger;
    bool addX, addY;

public:
    bool reachedTarget = false;
    Projectile();
    /**
     * Simple constructor that initilizes the x and y locations of the projectile
     * \param x is projectile's x location
     * \param y is projectile's y location
     */
    Projectile(int x, int y);
    /**
     * Simple destructor
     */
    ~Projectile();
    /**
     * Function to shoot the projectile, overwritten in child classes (in this case, the towers)
     */
    void shoot(int targetX, int targetY);
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);
};