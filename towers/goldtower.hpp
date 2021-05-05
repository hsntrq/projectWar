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
    GoldTower();
    GoldTower(int x, int y);
    void fireProjectile();
    void computeHealth();
    void repairTower();
    bool checkEnemyInRange();
    void upgradeTower();
    void destroyTower();
    void generateGold();
    void buildDamage();
    void buildReloadTime();
    void buildRange();
    void goldAdd(CoinDigits &coins);
    void repairBase(Base &);
};