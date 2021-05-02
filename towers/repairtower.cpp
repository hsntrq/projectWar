#include "repairtower.hpp"

RepairTower::RepairTower() : RepairTower::RepairTower(10, 10) {}

RepairTower::RepairTower(int x, int y)
{
    srcRect = {192, 139, 72, 115};
    towerPrice = 50;
    towerHealth = 100;
    towerAttackDamage = 5;
    towerAttackSpeed = 15;
    towerReloadTime = 2;
    towerAttackRange = 20;
    towerID = 5;
    moverRect = {x - 70 / 2 + 48, y + 96 - 115 - 20, 72, 115};
    RepairEffect = 50;
}
void RepairTower::fireProjectile()
{
}
void RepairTower::computeHealth()
{
}
void RepairTower::repairTower()
{
}
bool RepairTower::checkEnemyInRange()
{
    return false;
}
void RepairTower::upgradeTower()
{
}
void RepairTower::destroyTower()
{
}
void RepairTower::repairTowers()
{
}