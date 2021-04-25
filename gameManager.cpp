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
        (*projectile)->shoot(30, 50);
        if ((*projectile)->reachedTarget)
        {
            projectiles.remove(*projectile);
            delete (*projectile);
        }
    }
}

void gameManager::createObject(int x, int y)
{
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
    int r = rand()%6;

    if (r == 0)  {towers.push_back(new FireTower(x, y)); projectiles.push_back(new Projectile(x, y));}
    else if (r == 1) {towers.push_back(new BombTower(x, y)); projectiles.push_back(new Projectile(x, y));}
    else if (r == 2) {towers.push_back(new GoldTower(x, y)); projectiles.push_back(new Projectile(x, y));}
    else if (r == 3) {towers.push_back(new IceTower(x, y)); projectiles.push_back(new Projectile(x, y));}
    else if (r == 4) {towers.push_back(new LongBowTower(x, y)); projectiles.push_back(new Projectile(x, y));}
    else if (r == 5) {towers.push_back(new RepairTower(x, y)); projectiles.push_back(new Projectile(x, y));}
}

gameManager::gameManager(SDL_Renderer *renderer, SDL_Texture *asst) : gRenderer(renderer), assets(asst) {}
gameManager::~gameManager() //destructor deletes all dynamically created objects traversing them in all the lists
{
}