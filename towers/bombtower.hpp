#include "tower.hpp"

/**
 * \brief This class stores the attributes and methods specific to the bomb tower
 * 
 */

class BombTower : public Tower
{
private:
    int bombDamage, bombDamageRadius;

public:
    /**
     * Simple Constructor
     */
    BombTower();

    /**
     * Simple constructor that initilizes the x and y locations of the tower
     * \param x is tower's x location
     * \param y is tower's y location
     */
    BombTower(int x, int y);
    
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
     * empty function
     */
    void goldAdd(CoinDigits &);

    /**
     * empty function
     */
    void repairBase(Base &);
};