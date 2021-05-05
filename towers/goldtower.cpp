#include "goldtower.hpp"

GoldTower::GoldTower() : GoldTower::GoldTower(10, 10) {}

GoldTower::GoldTower(int x, int y)
{
    srcRect = {102, 26, 72, 110};
    towerPrice = 75;
    towerID = 4;
    moverRect = {x + 48 - 72 / 2, y + 96 - 110 - 20, 72, 110};
    cooledDown = true;
}

void GoldTower::buildDamage()
{
    towerAttackDamage = 0;
}
void GoldTower::buildReloadTime()
{
    towerReloadTime = 50;
}
void GoldTower::buildRange()
{
    towerAttackRange = 0;
}