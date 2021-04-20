#include <SDL.h>
#include "object.hpp"
#pragma once

class Enemy : public Object
{
protected:
    SDL_Rect srcSprite[3] = {{7, 15, 155, 102}, {0, 164, 153, 83}, {2, 288, 159, 123}}; //The sprite configuration for the three pigeons
    int frame, attackDamage, attackSpeed, movementSpeed, attackRange;
    char enemyName[];

public: //function declarations
    void draw(SDL_Renderer *, SDL_Texture *assets);
    Enemy();
    Enemy(int x, int y);
    virtual void attack()=0;
    virtual void healthCalculation()=0;
    virtual void death()=0;
    virtual bool followPath()=0;
    virtual void animateCharacter()=0;
};
