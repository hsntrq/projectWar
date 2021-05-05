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
    RepairTower();
    RepairTower(int x, int y);
    void fireProjectile();
    bool checkEnemyInRange();
    void buildDamage();
    void buildReloadTime();
    void buildRange();
    void goldAdd(CoinDigits &);
    void repairBase(Base &);
};