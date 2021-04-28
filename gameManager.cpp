#include "gameManager.hpp"

void gameManager::drawObjects() //iterating through the lists and drawing all of the instances
{
    for (list<Object *>::iterator tower = towers.begin(); tower != towers.end(); ++tower)
    {
        (*tower)->draw(gRenderer, assets);
    }
    for (list<Projectile *>::iterator projectile = projectiles.begin(); projectile != projectiles.end(); ++projectile)
    {    
        (*projectile)->draw(gRenderer, assets);
        (*projectile)->shoot(500, 416);
        if ((*projectile)->reachedTarget)
        {
            delete (*projectile);
            projectiles.erase(projectile--);
        }
    }
}

void gameManager::detectClick(int x, int y)
{
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
    int r = rand()%6;
    for (list<Patches *>::iterator patch = patches.begin(); patch != patches.end(); ++patch)
    {
        if ((*patch)->isAvailable)
            if ((*patch)->checkRange(x, y)){
                if (r == 0)  {towers.push_back(new FireTower(x, y)); projectiles.push_back(new FireTowerProjectile(x, y));}
                else if (r == 1) {towers.push_back(new BombTower(x, y)); projectiles.push_back(new BombTowerProjectile(x, y));}
                else if (r == 2) {towers.push_back(new GoldTower(x, y));}
                else if (r == 3) {towers.push_back(new IceTower(x, y)); projectiles.push_back(new IceTowerProjectile(x, y));}
                else if (r == 4) {towers.push_back(new LongBowTower(x, y)); projectiles.push_back(new LongBowTowerProjectile(x, y));}
                else if (r == 5) {towers.push_back(new RepairTower(x, y));}
            }

    }
    
}

gameManager::gameManager(SDL_Renderer *renderer, SDL_Texture *asst) : gRenderer(renderer), assets(asst) {

    patches.push_back(new Patches(64,480));
    patches.push_back(new Patches(288,416));
    patches.push_back(new Patches(288,256));
    patches.push_back(new Patches(32,64));
    patches.push_back(new Patches(672,160));
    patches.push_back(new Patches(480,352));
    patches.push_back(new Patches(544,544));
    patches.push_back(new Patches(768,320));
    patches.push_back(new Patches(992,512));
    patches.push_back(new Patches(1152,416));
    patches.push_back(new Patches(960,224));
    
}
gameManager::~gameManager() //destructor deletes all dynamically created objects traversing them in all the lists
{
}