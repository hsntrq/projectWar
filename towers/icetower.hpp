#include "tower.hpp"

/**
 * \brief This class stores the attributes and methods specific to the ice tower
 * 
 */
class IceTower : public Tower
{
private:
    int IceDamage;

public:
    IceTower();
    IceTower(int x, int y);
    void fireProjectile();
    void computeHealth();
    void repairTower();
    bool checkEnemyInRange();
    void upgradeTower();
    void destroyTower();
    void iceSlow();
};