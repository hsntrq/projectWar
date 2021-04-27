#include "goldtower.hpp"

GoldTower::GoldTower(): GoldTower::GoldTower(10,10){}
GoldTower::GoldTower(int x, int y){
    srcRect = {102,26,72,110};
    towerPrice = 50;
    towerHealth = 100;
    towerAttackDamage = 5;
    towerAttackSpeed = 15;
    towerReloadTime = 2;
    towerAttackRange = 20;
    towerName = "Gold Tower";
    moverRect = {x,y,72,110};
    goldMineRate = 50;
}
void GoldTower::fireProjectile(){

}
void GoldTower::computeHealth(){

}
void GoldTower::repairTower(){

}
bool GoldTower::checkEnemyInRange(){
    return false;
}
void GoldTower::upgradeTower(){

}
void GoldTower::destroyTower(){

}
void GoldTower::generateGold(){

}