#include "../object.hpp"
#include <iostream>
#include <list>
#include <tuple>
#pragma once
/**
 * \brief Parent class of all enemies/zombies, stores methods and attributes common to them all
 */
struct Path
{
    int direction, stop;
    Path(int d, int s) : direction(d), stop(s) {}
};
class Enemy : public Object
{
private:
    int frame, direction, health = 50;

protected:
    SDL_Rect srcSprite[12];
    int attackDamage, attackSpeed, movementSpeed, attackRange;
    list<Path> path;
    string enemyName;

public: //function declarations
    bool death;
    std::tuple<int, int, int, int> location();

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
    void attack();
    /**
     * Function to calculate the enemy's HP, overwritten in child classes (in this case, the towers)
     */
    void healthCalculation(int damage);
    /**
     * Function to destroy the enemy, overwritten in child classes (in this case, the towers)
     */
    //void death();
    /**
     * Function to have the enemy follow a defined path, overwritten in child classes (in this case, the towers)
     */
    bool followPath();
};
