#include "../enemies/enemy.hpp"
#include <string>
#include <list>
#include "../projectile/projectile.hpp"
#include "../projectile/firetowerprojectile.hpp"
#include "../projectile/bombtowerprojectile.hpp"
#include "../projectile/longbowtowerprojectile.hpp"
#include "../projectile/icetowerprojectile.hpp"
#include "../goldCoins/coinDigits.hpp"
#include <cmath>
#include "../base.hpp"

#pragma once
/**
 * \brief Parent class of all towers, stores methods and attributes common to them all
 */
class Tower : public Object
{
protected:
    int towerAttackDamage, towerAttackRange, towerReloadTime;

public: //function declarations
    int towerID;
    bool cooledDown;
    int towerPrice;

    /**
     * Simple Constructor
     */
    Tower(); // constructors (overloaded)
    
    /**
     * Simple constructor that initilizes the x and y locations of the tower
     * \param x is tower's x location
     * \param y is tower's y location
     */
    Tower(int x, int y);

    /**
     * fires projectiles
     */
    void fireProjectile(int, int, std::list<Projectile *> &);

    /**
     * sets damage of the tower
     */
    virtual void buildDamage() = 0;

    /**
     * sets reload time of the tower
     */
    virtual void buildReloadTime() = 0;

    /**
     * sets range of the tower
     */
    virtual void buildRange() = 0;

    /**
     * adds gold every few seconds
     */
    virtual void goldAdd(CoinDigits &) = 0;

    /**
     * repairs base every few seconds
     */
    virtual void repairBase(Base &) = 0;

    /**
     * updates the cooldown status of the towes after cooldown time and firing projectiles
     */
    void updateCoolDownStatus(int &frames);

    /**
     * draws tower to screen
     */
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);

    /**
     * checks if there's an enemy in range
     */
    std::tuple<int, int> checkEnemyInRange(std::list<Enemy *> &enemies);

    /**
     * operator overloaded
     */
    bool operator>=(int coins);
};
