#include "bombtower.hpp"

BombTower::BombTower() : BombTower::BombTower(10, 10) {}

BombTower::BombTower(int x, int y)
{
    srcRect = {185, 66, 77, 70};
    towerID = 1;
    towerPrice = 65;
    moverRect = {x - 77 / 2 + 48, y + 96 - 70 - 20, 77, 70};
}

void BombTower::buildDamage()
{
    towerAttackDamage = 80;
}

void BombTower::buildReloadTime()
{
    towerReloadTime = 80;
}

void BombTower::buildRange()
{
    towerAttackRange = 400;
}
void BombTower::goldAdd(CoinDigits &coins) {}

void BombTower::repairBase(Base &base) {}
