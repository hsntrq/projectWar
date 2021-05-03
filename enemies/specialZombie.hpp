#include "enemy.hpp"
#pragma once

/**
 * \brief This class stores the attributes and functions specific to the special zombie
 * 
 */
class SpecialZombie : public Enemy
{
public:
    SpecialZombie();
    SpecialZombie(int x, int y, std::list<Path> path_);
};