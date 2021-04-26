#include "weakZombie.hpp"

WeakZombie::WeakZombie(): WeakZombie(10, 10){}

WeakZombie::WeakZombie(int x, int y){
    frame = 0;
    attackDamage = 1;
    attackSpeed = 1;
    movementSpeed = 5;
    attackRange = 3;
    enemyName = "Weak Zombie";
}

void WeakZombie::healthCalculation(){

}
void WeakZombie::death(){

}
void WeakZombie::attack(){

}
bool WeakZombie::followPath(){

}
void WeakZombie::animateCharacter(){

}