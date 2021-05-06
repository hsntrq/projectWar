#include "tower.hpp"

/**
 * \brief This class stores the attributes and methods specific to the longbow tower
 * 
 */
class LongBowTower : public Tower
{
private:
    int specialArrow;

public:
    /**
     * Simple Constructor
     */
    LongBowTower();

    /**
     * Simple constructor that initilizes the x and y locations of the tower
     * \param x is tower's x location
     * \param y is tower's y location
     */
    LongBowTower(int x, int y);

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