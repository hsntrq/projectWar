#include "longbowtower.hpp"

LongBowTower::LongBowTower() : LongBowTower::LongBowTower(10, 10) {}

LongBowTower::LongBowTower(int x, int y)
{
    srcRect = {15, 15, 77, 121};
    towerPrice = 50;
    towerHealth = 100;
    towerAttackDamage = 20;
    towerAttackSpeed = 15;
    towerReloadTime = 20;
    towerAttackRange = 250;
    towerID = 3;
    moverRect = {x + 48 - 77 / 2, y + 96 - 121 - 20, 77, 121};
    specialArrow = 1;
    cooledDown = true;

}
void LongBowTower::fireProjectile()
{
}
void LongBowTower::computeHealth()
{
}
void LongBowTower::repairTower()
{
}
bool LongBowTower::checkEnemyInRange()
{
    return false;
}
void LongBowTower::upgradeTower()
{
}
void LongBowTower::destroyTower()
{
}
void LongBowTower::criticalArrowDamage()
{
}