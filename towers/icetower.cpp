#include "icetower.hpp"

IceTower::IceTower(): IceTower(10,10){}
IceTower::IceTower(int x, int y){
    towerPrice = 50;
    towerHealth = 100;
    towerAttackDamage = 5;
    towerAttackSpeed = 15;
    towerReloadTime = 2;
    towerAttackRange = 20;
    towerName = "Ice Tower";
    moverRect = {x, y, 25, 35};
}
void IceTower::fireProjectile(){

}
void IceTower::computeHealth(){

}
void IceTower::repairTower(){

}
bool IceTower::checkEnemyInRange(){

}
void IceTower::upgradeTower(){

}
void IceTower::destroyTower(){

}
void IceTower::iceSlow(){

}