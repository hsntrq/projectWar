#include "icetowerprojectile.hpp"

IceTowerProjectile::IceTowerProjectile(int x, int y, int tx, int ty, int towerDamage)//constructor which initiates the Projectile at location (x, y)
{
    damage = towerDamage;
    targetX = tx;
    targetY = ty;
    moverRect = {x,y,16,15}; // initializing the projectile to appear at of the tower turret
    gradient = 0;
    srcRect = {657,222,16,15};
}


IceTowerProjectile::~IceTowerProjectile() {}