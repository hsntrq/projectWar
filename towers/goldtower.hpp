#include "tower.hpp"

class GoldTower: public Tower{
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
};