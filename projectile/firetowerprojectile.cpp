#include "firetowerprojectile.hpp"

FireTowerProjectile::FireTowerProjectile(int x, int y, int tx, int ty, int towerDamage)//constructor which initiates the Projectile at location (x, y)
{
    damage = towerDamage;
    moverRect = {x, y, 50, 60}; // initializing the projectile to appear at of the tower turret
    gradient = 0;
    srcRect = approaching;
    targetX = tx;
    targetY = ty;
}



FireTowerProjectile::~FireTowerProjectile() {}