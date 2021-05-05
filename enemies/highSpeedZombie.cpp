#include "highSpeedZombie.hpp"

HighSpeedZombie::HighSpeedZombie() {}

HighSpeedZombie::HighSpeedZombie(int x, int y, std::list<Path> path_)
{
    path = path_;
    attackDamage = 25;
    attackSpeed = 1;
    movementSpeed = 4 + rand() % 3;
    attackRange = 3;
    health = 40;
    enemyName = "High Speed Zombie";
    srcSprite[0] = {353, 173, 15, 30};
    srcSprite[1] = {380, 172, 16, 31};
    srcSprite[2] = {408, 173, 16, 30};
    srcSprite[3] = {353, 212, 17, 32};
    srcSprite[4] = {382, 212, 15, 31};
    srcSprite[5] = {409, 212, 16, 32};
    srcSprite[6] = {352, 255, 15, 30};
    srcSprite[7] = {379, 254, 16, 30};
    srcSprite[8] = {407, 255, 16, 30};
    srcSprite[9] = {347, 295, 25, 30};
    srcSprite[10] = {375, 294, 25, 31};
    srcSprite[11] = {404, 295, 23, 30};
    srcRect = srcSprite[0];
    moverRect = {x, y, 20, 30};
}
