#include "projectile.hpp"

/**
 * \brief This class stores the attributes and methods specific to the ice tower's projectile
 * 
 */
class IceTowerProjectile: public Projectile{
private:
SDL_Rect approaching = {521,10,24,31};
SDL_Rect landed = {494, 298, 144, 117};

public:
/**
     * Simple constructor that initilizes the x and y locations of the projectile
     * \param x is the projectile's x location
     * \param y is the projectile's y location
     */
    IceTowerProjectile(int x, int y);
    /**
     * Simple destructor
     */
    ~IceTowerProjectile();
};