#include "firetower.hpp"

FireTower::FireTower() : FireTower::FireTower(10, 10) {}

FireTower::FireTower(int x, int y)
{
    srcRect = {20, 144, 64, 95};
    towerPrice = 40;
    towerID = 0;
    moverRect = {x - 64 / 2 + 48, y + 96 - 95 - 20, 64, 95};
    cooledDown = true;
}

void FireTower::buildDamage()
{
    towerAttackDamage = 40;
}

void FireTower::buildReloadTime()
{
    towerReloadTime = 40;
}

void FireTower::buildRange()
{
    towerAttackRange = 300;
}
void FireTower::goldAdd(CoinDigits &coins) {}

void FireTower::repairBase(Base &base) {}
