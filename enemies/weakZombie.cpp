#include "weakZombie.hpp"

WeakZombie::WeakZombie() {}

WeakZombie::WeakZombie(int x, int y, std::list<Path> path_)
{
    path = path_;
    attackDamage = 5;
    attackSpeed = 1;
    movementSpeed = 1 + rand() % 3;
    attackRange = 3;
    health = 20;
    enemyName = "Weak Zombie";
    srcSprite[0] = {436, 177, 15, 26};
    srcSprite[1] = {466, 176, 14, 26};
    srcSprite[2] = {496, 177, 14, 26};
    srcSprite[3] = {437, 218, 14, 26};
    srcSprite[4] = {469, 217, 11, 26};
    srcSprite[5] = {496, 218, 15, 26};
    srcSprite[6] = {436, 260, 15, 25};
    srcSprite[7] = {466, 259, 14, 25};
    srcSprite[8] = {496, 260, 14, 25};
    srcSprite[9] = {431, 300, 24, 25};
    srcSprite[10] = {460, 299, 25, 26};
    srcSprite[11] = {491, 300, 24, 25};
    srcRect = srcSprite[0];
    moverRect = {x, y, 15, 26};
}
