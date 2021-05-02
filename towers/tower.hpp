#include <SDL.h>
#include "../object.hpp"
#include <string>
#include <list>
#include "../patches.hpp"
#pragma once
/**
 * \brief Parent class of all towers, stores methods and attributes common to them all
 */
class Tower : public Object
{
protected:
    //SDL_Rect srcSprite; //The sprite configuration for the eggs(hatched as well)
    int towerPrice, towerHealth, towerAttackDamage, towerAttackSpeed, towerReloadTime, towerAttackRange;
    std::string towerName;

public:      //function declarations
    Tower(); // constructors (overloaded)
    /**
     * Simple constructor that initilizes the x and y locations of the tower
     * \param x is tower's x location
     * \param y is tower's y location
     */
    Tower(int x, int y);
    /**
     * Function to fire the projectile, overwritten in child classes (in this case, the towers)
     */
    virtual void fireProjectile() = 0;
    /**
     * Function to calculate remaining HP, overwritten in child classes (in this case, the towers)
     */
    virtual void computeHealth() = 0;
    /**
     * Function to repair in case of damage, overwritten in child classes (in this case, the towers)
     */
    virtual void repairTower() = 0;
    /**
     * Function to detect enemies in range, overwritten in child classes (in this case, the towers)
     */
    virtual bool checkEnemyInRange() = 0;
    /**
     * Function to upgrade tower specs, overwritten in child classes (in this case, the towers)
     */
    virtual void upgradeTower() = 0;
    /**
     * Function to destroy tower, overwritten in child classes (in this case, the towers)
     */
    virtual void destroyTower() = 0;
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);
    std::tuple<int, int> Tower::checkEnemyInRange(std::list<Patches *> &patches);
};
