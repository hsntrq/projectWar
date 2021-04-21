#include "goldtower.hpp"

GoldTower::GoldTower(): GoldTower::GoldTower(10,10){}
GoldTower::GoldTower(int x, int y){
    towerPrice = 50;
    towerHealth = 100;
    towerAttackDamage = 5;
    towerAttackSpeed = 15;
    towerReloadTime = 2;
    towerAttackRange = 20;
    towerName = "Gold Tower";
    moverRect = {x, y, 25, 35};
    goldMineRate = 50;
}
void GoldTower::fireProjectile(){

}
void GoldTower::computeHealth(){

}
void GoldTower::repairTower(){

}
bool GoldTower::checkEnemyInRange(){

}
void GoldTower::upgradeTower(){

}
void GoldTower::destroyTower(){

}
void GoldTower::generateGold(){

}