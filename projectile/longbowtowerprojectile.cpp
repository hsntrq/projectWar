#include "longbowtowerprojectile.hpp"

LongBowTowerProjectile::LongBowTowerProjectile(int x, int y) //constructor which initiates the projectile at location (x, y)
{
    srcRect = approaching; // initializing sprite
    
    moverRect = {x, y, 50, 60}; // initializing the projectile to appear at of the tower turret
}

LongBowTowerProjectile::~LongBowTowerProjectile(){}