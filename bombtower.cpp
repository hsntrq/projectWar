#include "Bombtower.hpp"

BombTower::BombTower(): BombTower::BombTower(10,10){}
BombTower::BombTower(int x, int y){
    srcRect = {185,66,77,70};
    towerPrice = 50;
    towerHealth = 100;
    towerAttackDamage = 5;
    towerAttackSpeed = 15;
    towerReloadTime = 2;
    towerAttackRange = 20;
    towerName = "Bomb Tower";
    moverRect = {x,y,77,70};
}
void BombTower::fireProjectile(){

}
void BombTower::computeHealth(){

}
void BombTower::repairTower(){

}
bool BombTower::checkEnemyInRange(){

}
void BombTower::upgradeTower(){

}
void BombTower::destroyTower(){

}
void BombTower::bombExplode(){

}