#include "tower.hpp"

/**
 * \brief This class stores the attributes and methods specific to the fire tower
 * 
 */
class FireTower : public Tower
{
private:
    int fireDamage;

public:
    /**
     * Simple Constructor
     */
    FireTower();

    /**
     * Simple constructor that initilizes the x and y locations of the tower
     * \param x is tower's x location
     * \param y is tower's y location
     */
    FireTower(int x, int y);

    /**
     * fires projectiles
     */
    void fireProjectile();

    /**
     * sets damage of the tower
     */
    void buildDamage();

    /**
     * sets reload time of the tower
     */
    void buildReloadTime();

    /**
     * sets range of the tower
     */
    void buildRange();

    /**
     * does nothing
     */
    void goldAdd(CoinDigits &);

    /**
     * does nothing
     */
    void repairBase(Base &);
};