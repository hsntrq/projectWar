#include "specialZombie.hpp"

SpecialZombie::SpecialZombie() {}

SpecialZombie::SpecialZombie(int x, int y, std::list<Path> path_)
{
    path = path_;
    attackDamage = 1;
    attackSpeed = 1;
    movementSpeed = 1 + rand() % 3;
    attackRange = 3;
    enemyName = "Special Zombie";
    srcSprite[0] = {352, 12, 17, 29};
    srcSprite[1] = {375, 10, 25, 30};
    srcSprite[2] = {407, 12, 18, 29};
    srcSprite[3] = {350, 50, 18, 29};
    srcSprite[4] = {379, 49, 15, 29};
    srcSprite[5] = {405, 50, 19, 29};
    srcSprite[6] = {352, 91, 17, 30};
    srcSprite[7] = {378, 90, 20, 30};
    srcSprite[8] = {407, 91, 18, 30};
    srcSprite[9] = {352, 133, 18, 30};
    srcSprite[10] = {381, 133, 15, 29};
    srcSprite[11] = {407, 133, 19, 30};
    srcRect = srcSprite[0];
    moverRect = {x, y, 18, 30};
}
