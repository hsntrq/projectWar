#include "enemy.hpp"
#pragma once

/**
 * \brief This class stores the attributes and methods specific to the High Speed Zombie
 * 
 */
class HighSpeedZombie : public Enemy
{
public:
    /**
     * Simple constructo, doens't initalize anythingf
     */
    HighSpeedZombie();

    /**
     * Simple constructor that initalizes attributes based on parameters passed
     * \param x is x coordinate of zombie
     * \param y is y coordinate of zombie
     * \param path_ is path to be followed (type: list)
     */
    HighSpeedZombie(int x, int y, std::list<Path> path_);
};