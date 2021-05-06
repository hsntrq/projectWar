#include "enemy.hpp"
#pragma once

/**
 * \brief This class stores the attributes and methods specific to the High HP Zombie
 * 
 */
class HighHPZombie : public Enemy
{
public:
    /**
     * Simple constructor, doesn't do anything
     */
    HighHPZombie();

    /**
     * Simple constructor that initalizes attributes based on parameters passed
     * \param x is x coordinate of zombie
     * \param y is y coordinate of zombie
     * \param path_ is path to be followed (type: list)
     */
    HighHPZombie(int x, int y, std::list<Path> path_);
};