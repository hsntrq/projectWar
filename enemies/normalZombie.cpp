#include "normalZombie.hpp"

NormalZombie::NormalZombie(){}

NormalZombie::NormalZombie(int x, int y, std::list<Path> path_){
    path = path_;
    attackDamage = 1;
    attackSpeed = 1;
    movementSpeed = 1+rand()%3;
    attackRange = 3;
    enemyName = "Normal Zombie";
    srcSprite[0] = {271,15,15,26};
    srcSprite[1] = {298,14,15,26};
    srcSprite[2] = {326,15,14,26};
    srcSprite[3] = {272,52,14,27};
    srcSprite[4] = {301,52,12,26};
    srcSprite[5] = {326,52,15,27};
    srcSprite[6] = {271,95,15,26};
    srcSprite[7] = {298,94,15,26};
    srcSprite[8] = {326,95,14,26};
    srcSprite[9] = {271,136,14,27};
    srcSprite[10] = {298,135,12,27};
    srcSprite[11] = {325,136,15,27};
    srcRect = srcSprite[0];
    moverRect = {x,y,15,26};
}
