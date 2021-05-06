#include "enemy.hpp"
#pragma once

/**
 * \brief This class stores the attributes and methods specific to the Normal Zombie
 * 
 */
class NormalZombie : public Enemy
{
public:
    /**
     * Simple constructor, doesn't initalize anything
     */
    NormalZombie();

    /**
     * Simple constructor that initalizes attributes based on parameters passed
     * \param x is x coordinate of zombie
     * \param y is y coordinate of zombie
     * \param path_ is path to be followed (type: list)
     */
    NormalZombie(int x, int y, std::list<Path> path_);
};