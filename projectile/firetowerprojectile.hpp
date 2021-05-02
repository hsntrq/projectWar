#include "projectile.hpp"

/**
 * \brief This class stores the attributes and methods specific to the fire tower's projectile
 * 
 */
class FireTowerProjectile : public Projectile
{
private:
    SDL_Rect approaching = {353, 173, 15, 30};
    SDL_Rect landed = {494, 298, 144, 117};

public:
    /**
     * Simple constructor that initilizes the x and y locations of the projectile
     * \param x is the projectile's x location
     * \param y is the projectile's y location
     */
    FireTowerProjectile(int x, int y);
    /**
     * Simple destructor
     */
    ~FireTowerProjectile();
};