#include "bombtowerprojectile.hpp"

BombTowerProjectile::BombTowerProjectile(int x, int y, int tx, int ty)  //constructor which initiates the Projectile at location (x, y)
{
    moverRect = {x, y, 50, 60}; // initializing the projectile to appear at of the tower turret
    gradient = 0;
    srcRect = approaching;
    targetX = tx;
    targetY = ty;
}

BombTowerProjectile::~BombTowerProjectile() {}

