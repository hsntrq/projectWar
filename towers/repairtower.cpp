#include "repairtower.hpp"

RepairTower::RepairTower(): RepairTower(10,10){}

RepairTower::RepairTower(int x, int y){
    towerPrice = 50;
    towerHealth = 100;
    towerAttackDamage = 5;
    towerAttackSpeed = 15;
    towerReloadTime = 2;
    towerAttackRange = 20;
    towerName = "Repair Tower";
    moverRect = {x, y, 25, 35};
    RepairEffect = 50;
}
void RepairTower::fireProjectile(){

}
void RepairTower::computeHealth(){

}
void RepairTower::repairTower(){

}
bool RepairTower::checkEnemyInRange(){

}
void RepairTower::upgradeTower(){

}
void RepairTower::destroyTower(){

}
void RepairTower::repairTowers(){

}