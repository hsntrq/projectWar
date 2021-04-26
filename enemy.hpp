#include <SDL.h>
#include "object.hpp"
#pragma once

class Enemy : public Object
{
protected:
    SDL_Rect srcSprite[11]];
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
