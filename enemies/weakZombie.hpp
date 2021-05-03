#include "enemy.hpp"
#pragma once

/**
 * \brief This class stores the attributes and functions specific to the weak zombie
 * 
 */
class WeakZombie : public Enemy
{
public:
    WeakZombie();
    WeakZombie(int x, int y, std::list<Path> path_);
};