#include "icetower.hpp"

IceTower::IceTower() : IceTower::IceTower(10, 10) {}

IceTower::IceTower(int x, int y)
{
    srcRect = {105, 159, 69, 75};
    towerPrice = 50;
    towerAttackDamage = 60;
    towerReloadTime = 60;
    towerAttackRange = 350;
    towerID = 2;
    moverRect = {x + 48 - 69 / 2, y + 96 - 75 - 20, 69, 75};
    cooledDown = true;
}

void IceTower::buildDamage()
{
    towerAttackDamage = 60;
}

void IceTower::buildReloadTime()
{
    towerReloadTime = 60;
}

void IceTower::buildRange()
{
    towerAttackRange = 250;
}
void IceTower::goldAdd(CoinDigits &coins) {}