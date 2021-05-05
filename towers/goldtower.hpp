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
    bool checkEnemyInRange();
    void generateGold();
    void buildDamage();
    void buildReloadTime();
    void buildRange();
    void goldAdd(CoinDigits &coins);
    void repairBase(Base &);
};