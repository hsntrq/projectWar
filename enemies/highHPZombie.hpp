#include "enemy.hpp"
#pragma once

/**
 * \brief This class stores the attributes and methods specific to the High HP Zombie
 * 
 */
class HighHPZombie : public Enemy
{
public:
    HighHPZombie();
    HighHPZombie(int x, int y, std::list<Path> path_);
};