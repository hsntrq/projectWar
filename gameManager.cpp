#include "gameManager.hpp"

void gameManager::drawObjects() //iterating through the lists and drawing all of the instances
{
    for (list<Object *>::iterator tower = towers.begin(); tower != towers.end(); ++tower)
    {
        (*tower)->draw(gRenderer, assets);
    }
    for (int i = 0; i < towerCards.size(); i++)
    {
        towerCards[i].draw(gRenderer, assets);
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
    if (cardClicked)
    {
        for (list<Patches *>::iterator patch = patches.begin(); patch != patches.end(); ++patch)
        {
            (*patch)->isClicked(towers, projectiles, towerSelected, x, y);
        }
        cardClicked = false;
        towerCards[towerSelected].isSelected = false;
        towerSelected = -1;
    }
    else
    {
        for (int i = 0; i < towerCards.size(); i++)
        {
            if (towerCards[i].isClicked(x, y))
            {
                cardClicked = true;
                towerSelected = i;
                towerCards[towerSelected].isSelected = true;
                break;
            }
        }
    }
}

gameManager::gameManager(SDL_Renderer *renderer, SDL_Texture *asst)
{
    gRenderer = renderer;
    assets = asst;
    patches.push_back(new Patches(64, 480));
    patches.push_back(new Patches(288, 416));
    patches.push_back(new Patches(288, 256));
    patches.push_back(new Patches(32, 64));
    patches.push_back(new Patches(672, 160));
    patches.push_back(new Patches(480, 352));
    patches.push_back(new Patches(544, 544));
    patches.push_back(new Patches(768, 320));
    patches.push_back(new Patches(992, 512));
    patches.push_back(new Patches(1152, 416));
    patches.push_back(new Patches(960, 224));

    towerCards.push_back(FireCard());
    towerCards.push_back(BombCard());
    towerCards.push_back(GoldCard());
    towerCards.push_back(IceCard());
    towerCards.push_back(LongBowCard());
    towerCards.push_back(RepairCard());

    cardClicked = false;
    towerSelected = -1;
}
gameManager::~gameManager() //destructor deletes all dynamically created objects traversing them in all the lists
{
}