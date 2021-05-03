#include "projectile.hpp"

/**
 * \brief This class stores the attributes and methods specific to the longbow tower's projectile
 * 
 */
class LongBowTowerProjectile : public Projectile
{
public:
    /**
     * Simple constructor that initilizes the x and y locations of the projectile
     * \param x is the projectile's x location
     * \param y is the projectile's y location
     */
    LongBowTowerProjectile(int x, int y, int, int, int);
    /**
     * Simple destructor
     */
    ~LongBowTowerProjectile();
};