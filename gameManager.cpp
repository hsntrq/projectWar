#include "gameManager.hpp"
#include <iostream>
using namespace std;
void gameManager::drawObjects() //iterating through the lists and drawing all of the instances
{
    
}

void gameManager::createObject(int x, int y)
{
    
}

gameManager::gameManager(SDL_Renderer *renderer, SDL_Texture *asst) : gRenderer(renderer), assets(asst) {}
gameManager::~gameManager() //destructor deletes all dynamically created objects traversing them in all the lists
{
    
}