#include "tower.hpp"

// pigeon implementation will go here.

void Tower::draw(SDL_Renderer *gRenderer, SDL_Texture *assets) //selects  the sprite of the Tower, updates it with drop function and then draws it
{
    //srcRect = srcSprite;
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
}

Tower::Tower(int x, int y) //constructor which initiates the Tower at location (x, y)
{
    // it will display Tower on (x, y) location, the size of pigeon is 25 width, 35 height
    moverRect = {x, y, 100, 100};
}

Tower::Tower() //default constructor
{
    // it will display Tower on x = 30, y = 40 location, the size of pigeon is 25 width, 35 height
    moverRect = {30, 40, 25, 35};
}
std::tuple<int, int> Tower::checkEnemyInRange(std::list<Patches *> &patches){
    int minDistance = 10000;
    double distance;
    std::tuple<int, int> location = std::make_tuple(NULL,NULL);
    for (auto patch: patches){
        if (!patch->isAvailable){
            auto [x, y] = patch->location();
            x+=48;
            y+=48;
            distance = ((x-moverRect.x)^2 + (y-moverRect.y)^2)^(1/2);
            if (attackRange > distance){
                if (minDistance > distance){
                    minDistance = distance;
                    location = std::make_tuple(x,y);
                }
            }
        }
    }
    return location;
}
