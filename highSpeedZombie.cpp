#include "highSpeedZombie.hpp"

HighSpeedZombie::HighSpeedZombie(): HighSpeedZombie(10, 10){}

HighSpeedZombie::HighSpeedZombie(int x, int y){
    frame = 0;
    attackDamage = 1;
    attackSpeed = 1;
    movementSpeed = 5;
    attackRange = 3;
    enemyName = "High Speed Zombie";
}

void HighSpeedZombie::healthCalculation(){

}
void HighSpeedZombie::death(){

}
void HighSpeedZombie::attack(){

}
bool HighSpeedZombie::followPath(){
    return false;
}
void HighSpeedZombie::animateCharacter(){

}
