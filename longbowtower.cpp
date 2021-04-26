#include "longbowtower.hpp"

LongBowTower::LongBowTower(): LongBowTower::LongBowTower(10,10){}
LongBowTower::LongBowTower(int x, int y){
    srcRect = {15,15,77,121};
    towerPrice = 50;
    towerHealth = 100;
    towerAttackDamage = 5;
    towerAttackSpeed = 15;
    towerReloadTime = 2;
    towerAttackRange = 20;
    towerName = "LongBow Tower";
    moverRect = {x,y,77,121};
    specialArrow = 1;
}
void LongBowTower::fireProjectile(){

}
void LongBowTower::computeHealth(){

}
void LongBowTower::repairTower(){

}
bool LongBowTower::checkEnemyInRange(){

}
void LongBowTower::upgradeTower(){

}
void LongBowTower::destroyTower(){

}
void LongBowTower::criticalArrowDamage(){

}