#include "normalZombie.hpp"

NormalZombie::NormalZombie(): NormalZombie(10, 10){}

NormalZombie::NormalZombie(int x, int y){
    frame = 0;
    attackDamage = 1;
    attackSpeed = 1;
    movementSpeed = 5;
    attackRange = 3;
    enemyName = "Normal Zombie";
}

void NormalZombie::healthCalculation(){

}
void NormalZombie::death(){

}
void NormalZombie::attack(){

}
bool NormalZombie::followPath(){
    return false;
}
void NormalZombie::animateCharacter(){

}
