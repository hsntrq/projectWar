#include "tower.hpp"
/**
 * \brief This class stores the attributes and methods specific to the gold tower
 * 
 */
class GoldTower : public Tower
{
private:
    int goldMineRate;

public:
    /**
     * Simple Constructor
     */
    GoldTower();

    /**
     * Simple constructor that initilizes the x and y locations of the tower
     * \param x is tower's x location
     * \param y is tower's y location
     */
    GoldTower(int x, int y);

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
    void goldAdd(CoinDigits &coins);

    /**
     * does nothing
     */
    void repairBase(Base &);
};