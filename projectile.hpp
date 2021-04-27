#include "object.hpp"
#pragma once

/**
 * \brief Parent class of all projectiles, stores methods and attributes common to them all
 */

class Projectile: public Object
{
    protected:
    SDL_Rect approaching = {0, 0, 160, 133};
    SDL_Rect landed = {494, 298, 144, 117};
    

    public:
    bool reachedTarget = false;
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