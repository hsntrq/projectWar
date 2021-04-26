#include "tower.hpp"

/**
 * \brief This class stores the attributes and methods specific to the fire tower
 * 
 */
class FireTower: public Tower{
private:
    int fireDamage;
public:
    FireTower();
    FireTower(int x, int y);
    void fireProjectile();
    void computeHealth();
    void repairTower();
    bool checkEnemyInRange();
    void upgradeTower();
    void destroyTower();
    void burnDamage();
};