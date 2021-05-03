#include "projectile.hpp"

/**
 * \brief This class stores the attributes and methods specific to the ice tower's projectile
 * 
 */
class IceTowerProjectile : public Projectile
{
public:
    /**
     * Simple constructor that initilizes the x and y locations of the projectile
     * \param x is the projectile's x location
     * \param y is the projectile's y location
     */
    IceTowerProjectile(int x, int y, int, int, int);
    /**
     * Simple destructor
     */
    ~IceTowerProjectile();
};