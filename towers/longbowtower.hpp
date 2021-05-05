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
    LongBowTower();
    LongBowTower(int x, int y);
    void fireProjectile();
    void computeHealth();
    void repairTower();
    bool checkEnemyInRange();
    void upgradeTower();
    void destroyTower();
    void criticalArrowDamage();
    void buildDamage();
    void buildReloadTime();
    void buildRange();
    void goldAdd(CoinDigits &);
};