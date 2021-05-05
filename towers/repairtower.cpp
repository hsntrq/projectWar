#include "repairtower.hpp"

RepairTower::RepairTower() : RepairTower::RepairTower(10, 10) {}

RepairTower::RepairTower(int x, int y)
{
    srcRect = {192, 139, 72, 115};
    towerPrice = 30;
    towerID = 5;
    moverRect = {x - 70 / 2 + 48, y + 96 - 115 - 20, 72, 115};
    RepairEffect = 50;
}

void RepairTower::buildDamage(){}
void RepairTower::buildReloadTime(){}
void RepairTower::buildRange(){}