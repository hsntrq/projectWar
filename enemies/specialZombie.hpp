#include "enemy.hpp"
#pragma once

/**
 * \brief This class stores the attributes and functions specific to the special zombie
 * 
 */
class SpecialZombie : public Enemy
{
public:
    /** Simple constructor, doesn't initilize anything
     */
    SpecialZombie();

    /**
     * Simple constructor that initalizes attributes based on parameters passed
     * \param x is x coordinate of zombie
     * \param y is y coordinate of zombie
     * \param path_ is path to be followed (type: list)
     */
    SpecialZombie(int x, int y, std::list<Path> path_);
};