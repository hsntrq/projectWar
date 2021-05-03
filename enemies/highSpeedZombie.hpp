#include "enemy.hpp"
#pragma once

/**
 * \brief This class stores the attributes and methods specific to the High Speed Zombie
 * 
 */
class HighSpeedZombie : public Enemy
{
public:
    HighSpeedZombie();
    HighSpeedZombie(int x, int y, std::list<Path> path_);
};