#include "bombtowerprojectile.hpp"

BombTowerProjectile::BombTowerProjectile(int x, int y, int tx, int ty, int towerDamage) //constructor which initiates the Projectile at location (x, y)
{
    damage = towerDamage;
    moverRect = {x, y, 14, 15}; // initializing the projectile to appear at of the tower turret
    gradient = 0;
    srcRect = {682, 222, 14, 15};
    targetX = tx;
    targetY = ty;
}

BombTowerProjectile::~BombTowerProjectile() {}
