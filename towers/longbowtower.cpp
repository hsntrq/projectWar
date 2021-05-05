#include "longbowtower.hpp"

LongBowTower::LongBowTower() : LongBowTower::LongBowTower(10, 10) {}

LongBowTower::LongBowTower(int x, int y)
{
    srcRect = {15, 15, 77, 121};
    towerPrice = 25;
    towerID = 3;
    moverRect = {x + 48 - 77 / 2, y + 96 - 121 - 20, 77, 121};
    specialArrow = 1;
    cooledDown = true;
}
void LongBowTower::goldAdd(CoinDigits &coins) {}
void LongBowTower::buildDamage()
{
    towerAttackDamage = 20;
}

void LongBowTower::buildReloadTime()
{
    towerReloadTime = 20;
}

void LongBowTower::buildRange()
{
    towerAttackRange = 250;
}

void LongBowTower::repairBase(Base &base) {}