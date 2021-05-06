#include "../object.hpp"
#include <iostream>
#include <list>
#include <tuple>
#pragma once
/**
 * \brief This structure stores the path that enemies follow to base
 */
struct Path
{
    int direction, stop;
    Path(int d, int s) : direction(d), stop(s) {}
};
/**
 * \brief Parent class of all enemies/zombies, stores methods and attributes common to them all
 */
class Enemy : public Object
{
protected:
    int frame, direction, health;

protected:
    SDL_Rect srcSprite[12];
    int attackSpeed, movementSpeed, attackRange;
    list<Path> path;
    string enemyName;

public: //function declarations
    bool death;
    int attackDamage;

    /**
     * Returns the location of the enemy throuh which it is called
     */
    std::tuple<int, int, int, int> location();

    /**
     * Draws enemy to the screen
     */
    void draw(SDL_Renderer *, SDL_Texture *assets);
    
    /**
     * Simple constructor
     */
    Enemy();
    
    /**
     * Simple constructor that initilizes the x and y locations of the enemy
     * \param x is tower's x location
     * \param y is tower's y location
     */
    Enemy(int x, int y);
    
    /**
     * Function to calculate the enemy's health
     */
    void healthCalculation(int damage);

    /**
     * Function to have the enemy follow a defined path
     */
    bool followPath();
};
