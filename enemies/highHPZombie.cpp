#include "highHPZombie.hpp"

HighHPZombie::HighHPZombie() {}

HighHPZombie::HighHPZombie(int x, int y, std::list<Path> path_)
{
    path = path_;
    attackDamage = 1;
    attackSpeed = 1;
    movementSpeed = 1 + rand() % 3;
    attackRange = 3;
    health = 100;
    enemyName = "High HP Zombie";
    srcSprite[0] = {521, 10, 24, 31};
    srcSprite[1] = {552, 10, 25, 30};
    srcSprite[2] = {583, 10, 24, 31}; //up
    srcSprite[3] = {527, 49, 16, 29};
    srcSprite[4] = {560, 48, 14, 30};
    srcSprite[5] = {590, 49, 14, 29}; //right
    srcSprite[6] = {522, 90, 23, 31};
    srcSprite[7] = {552, 89, 25, 31};
    srcSprite[8] = {583, 88, 24, 33}; //down
    srcSprite[9] = {524, 132, 13, 30};
    srcSprite[10] = {555, 131, 14, 31};
    srcSprite[11] = {585, 132, 16, 30}; //left
    moverRect = {x, y, 24, 30};
    srcRect = srcSprite[0];
}
