#include "longbowtowerprojectile.hpp"

LongBowTowerProjectile::LongBowTowerProjectile(int x, int y, int tx, int ty, int towerDamage) //constructor which initiates the Projectile at location (x, y)
{
    damage = towerDamage;
    moverRect = {x, y, 16, 14}; // initializing the projectile to appear at of the tower turret
    gradient = 0;
    srcRect = {657, 248, 16, 14};
    targetX = tx;
    targetY = ty;
    reachedTarget = false;
}

LongBowTowerProjectile::~LongBowTowerProjectile() {}