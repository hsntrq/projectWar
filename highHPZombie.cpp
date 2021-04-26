#include "highHPZombie.hpp"

HighHPZombie::HighHPZombie(): HighHPZombie(10, 10){}

HighHPZombie::HighHPZombie(int x, int y){
    frame = 0;
    attackDamage = 1;
    attackSpeed = 1;
    movementSpeed = 5;
    attackRange = 3;
    enemyName = "High HP Zombie";
}


void HighHPZombie::healthCalculation(){

}

void HighHPZombie::death(){

}

void HighHPZombie::attack(){

}

bool HighHPZombie::followPath(){

}

void HighHPZombie::animateCharacter(){

}