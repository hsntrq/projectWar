#include "tower.hpp"

/**
 * \brief This class stores the attributes and methods specific to the repair tower
 * 
 */
class RepairTower: public Tower{
private:
    int RepairEffect;
public:
    RepairTower();
    RepairTower(int x, int y);
    void fireProjectile();
    void computeHealth();
    void repairTower();
    bool checkEnemyInRange();
    void upgradeTower();
    void destroyTower();
    void repairTowers();
};