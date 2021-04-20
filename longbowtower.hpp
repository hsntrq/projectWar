#include "tower.hpp"

class LongBowTower: public Tower{
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
};