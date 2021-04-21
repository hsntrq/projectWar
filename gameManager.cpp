#include "gameManager.hpp"

void gameManager::drawObjects() //iterating through the lists and drawing all of the instances
{
    for (list<Object *>::iterator tower = towers.begin(); tower != towers.end(); ++tower)
    {
        (*tower)->draw(gRenderer, assets);
    }
}

void gameManager::createObject(int x, int y)
{
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
    int r = rand()%6;

    if (r == 0)  towers.push_back(new FireTower(x, y));
    else if (r == 1) towers.push_back(new BombTower(x, y));
    else if (r == 2) towers.push_back(new GoldTower(x, y));
    else if (r == 3) towers.push_back(new IceTower(x, y));
    else if (r == 4) towers.push_back(new LongBowTower(x, y));
    else if (r == 5) towers.push_back(new RepairTower(x, y));
}

gameManager::gameManager(SDL_Renderer *renderer, SDL_Texture *asst) : gRenderer(renderer), assets(asst) {}
gameManager::~gameManager() //destructor deletes all dynamically created objects traversing them in all the lists
{
}