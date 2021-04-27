#include <SDL.h>
#include "object.hpp"
#pragma once

/**
 * \brief Parent class of all enemies/zombies, stores methods and attributes common to them all
 */

class Enemy : public Object
{
protected:
    SDL_Rect srcSprite[12];
    int frame, attackDamage, attackSpeed, movementSpeed, attackRange;
    string enemyName;

public: //function declarations
    void draw(SDL_Renderer *, SDL_Texture *assets);
    Enemy();
    /**
     * Simple constructor that initilizes the x and y locations of the enemy
     * \param x is tower's x location
     * \param y is tower's y location
     */
    Enemy(int x, int y);
    /**
     * Function to have the enemy attack another object, overwritten in child classes (in this case, the towers)
     */
    virtual void attack()=0;
    /**
     * Function to calculate the enemy's HP, overwritten in child classes (in this case, the towers)
     */
    virtual void healthCalculation()=0;
    /**
     * Function to destroy the enemy, overwritten in child classes (in this case, the towers)
     */
    virtual void death()=0;
    /**
     * Function to have the enemy follow a defined path, overwritten in child classes (in this case, the towers)
     */
    virtual bool followPath()=0;
    /**
     * Function to change enemy sprites, overwritten in child classes (in this case, the towers)
     */
    virtual void animateCharacter()=0;
};
