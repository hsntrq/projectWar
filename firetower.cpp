#include "firetower.hpp"

FireTower::FireTower(): FireTower::FireTower(10,10){}
FireTower::FireTower(int x, int y){
    srcRect = {20,144,64,95};
    towerPrice = 50;
    towerHealth = 100;
    towerAttackDamage = 5;
    towerAttackSpeed = 15;
    towerReloadTime = 2;
    towerAttackRange = 20;
    towerName = "Fire Tower";
    moverRect = {x, y, 64, 95};
    int fireDamage = 10;
}
void FireTower::fireProjectile(){
    
}
void FireTower::computeHealth(){

}
void FireTower::repairTower(){

}
bool FireTower::checkEnemyInRange(){

}
void FireTower::upgradeTower(){

}
void FireTower::destroyTower(){

}
void FireTower::burnDamage(){

}