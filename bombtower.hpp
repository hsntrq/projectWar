#include "tower.hpp"

/**
 * \brief This class stores the attributes and methods specific to the bomb tower
 * 
 */

class BombTower: public Tower{
private:
    int bombDamage, bombDamageRadius;
public:
    BombTower();
    BombTower(int x, int y);
    void fireProjectile();
    void computeHealth();
    void repairTower();
    bool checkEnemyInRange();
    void upgradeTower();
    void destroyTower();
    void bombExplode();
};