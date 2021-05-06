#include "firetowerprojectile.hpp"

FireTowerProjectile::FireTowerProjectile(int x, int y, int tx, int ty, int towerDamage) //constructor which initiates the Projectile at location (x, y)
{
    damage = towerDamage;
    moverRect = {x, y, 15, 15}; // initializing the projectile to appear at of the tower turret
    gradient = 0;
    srcRect = {634, 222, 15, 15};
    targetX = tx;
    targetY = ty;
    reachedTarget = false;
}

FireTowerProjectile::~FireTowerProjectile() {}