#include "repairtower.hpp"

RepairTower::RepairTower() : RepairTower::RepairTower(10, 10) {}

RepairTower::RepairTower(int x, int y)
{
    srcRect = {192, 139, 72, 115};
    towerPrice = 30;
    towerID = 5;
    moverRect = {x - 70 / 2 + 48, y + 96 - 115 - 20, 72, 115};
    cooledDown = true;
    RepairEffect = 5;
}
void RepairTower::goldAdd(CoinDigits &coins){}
void RepairTower::buildDamage()
{
    towerAttackDamage = 0;
}
void RepairTower::buildReloadTime()
{
    towerReloadTime = 500;
}
void RepairTower::buildRange()
{
    towerAttackRange = 0;
}

void RepairTower::repairBase(Base &base)
{
    base.increaseHealth(RepairEffect);
}