#include "icetower.hpp"

IceTower::IceTower(): IceTower::IceTower(10,10){}
IceTower::IceTower(int x, int y){
    srcRect = {105,159,69,75};
    towerPrice = 50;
    towerHealth = 100;
    towerAttackDamage = 5;
    towerAttackSpeed = 15;
    towerReloadTime = 2;
    towerAttackRange = 20;
    towerName = "Ice Tower";
    moverRect = {x,y,69,75};
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