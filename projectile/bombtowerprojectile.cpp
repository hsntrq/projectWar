#include "bombtowerprojectile.hpp"

BombTowerProjectile::BombTowerProjectile(int x, int y) //constructor which initiates the projectile at location (x, y)
{
    srcRect = approaching;      // initializing sprite
    moverRect = {x, y, 50, 60}; // initializing the projectile to appear at of the tower turret
}

BombTowerProjectile::~BombTowerProjectile() {}