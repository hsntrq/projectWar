#include "icetower.hpp"

IceTower::IceTower() : IceTower::IceTower(10, 10) {}

IceTower::IceTower(int x, int y)
{
    srcRect = {105, 159, 69, 75};
    towerPrice = 50;
    towerHealth = 100;
    towerAttackDamage = 5;
    towerAttackSpeed = 15;
    towerReloadTime = 50;
    towerAttackRange = 20;
    towerID = 2;
    moverRect = {x + 48 - 69 / 2, y + 96 - 75 - 20, 69, 75};
    cooledDown = true;

}
void IceTower::fireProjectile()
{
}
void IceTower::computeHealth()
{
}
void IceTower::repairTower()
{
}
bool IceTower::checkEnemyInRange()
{
    return false;
}
void IceTower::upgradeTower()
{
}
void IceTower::destroyTower()
{
}
void IceTower::iceSlow()
{
}