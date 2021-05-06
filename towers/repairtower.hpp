#include "tower.hpp"

/**
 * \brief This class stores the attributes and methods specific to the repair tower
 * 
 */
class RepairTower : public Tower
{
private:
    int RepairEffect;

public:
    /**
     * Simple Constructor
     */
    RepairTower();

    /**
     * Simple constructor that initilizes the x and y locations of the tower
     * \param x is tower's x location
     * \param y is tower's y location
     */
    RepairTower(int x, int y);

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
     * adds gold every few seconds
     */
    void goldAdd(CoinDigits &);

    /**
     * does nothing
     */
    void repairBase(Base &);
};