#include "specialZombie.hpp"

SpecialZombie::SpecialZombie(): SpecialZombie(10, 10){}

SpecialZombie::SpecialZombie(int x, int y){
    frame = 0;
    attackDamage = 1;
    attackSpeed = 1;
    movementSpeed = 5;
    attackRange = 3;
    enemyName = "Special Zombie";
}

void SpecialZombie::healthCalculation(){

}
void SpecialZombie::death(){

}
void SpecialZombie::attack(){

}
bool SpecialZombie::followPath(){
    return false;
}
void SpecialZombie::animateCharacter(){

}
