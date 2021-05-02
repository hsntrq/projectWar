#include "enemy.hpp"


void Enemy::draw(SDL_Renderer *gRenderer, SDL_Texture *assets) //selects  the sprite of the Enemy, updates it with drop function and then draws it
{
    frame = (frame+1)%3;
    srcRect = srcSprite[frame+direction*3];
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
}

Enemy::Enemy(int x, int y) //constructor which initiates the Enemy at location (x, y)
{
    // it will display Enemy on (x, y) location, the size of pigeon is 25 width, 35 height
    moverRect = {x, y, 25, 35};
}

Enemy::Enemy() //default constructor
{
    // it will display Enemy on x = 30, y = 40 location, the size of pigeon is 25 width, 35 height
    moverRect = {30, 40, 25, 35};
}

bool Enemy::followPath(){
    if (path.empty()){
        if (moverRect.y > moverRect.h){
            moverRect.y-=movementSpeed;
            return false;
        }
        else return true;
    }
    direction = path.front().direction;
    if (direction == 0){
        if (moverRect.y > path.front().stop){
            moverRect.y-=movementSpeed;
            return false;
        }
    }
    else if (direction == 1){
        if (moverRect.x < path.front().stop){
            moverRect.x+=movementSpeed;
            return false;
        }
    }
    else if (direction == 2){
        if (moverRect.y < path.front().stop){
            moverRect.y+=movementSpeed;
            return false;
        }
    }
    else if (direction == 3){
        if (moverRect.x > path.front().stop){
            moverRect.x-=movementSpeed;
            return false;
        }
    }
    path.pop_front();
    return false;
}


