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
    int towerAttackDamage, towerAttackRange, towerReloadTime, towerPrice;

public: //function declarations
    int towerID;
    bool cooledDown;
    Tower(); // constructors (overloaded)
    /**
     * Simple constructor that initilizes the x and y locations of the tower
     * \param x is tower's x location
     * \param y is tower's y location
     */
    Tower(int x, int y);

    void fireProjectile(int, int, std::list<Projectile *> &);
    virtual void buildDamage() = 0;
    virtual void buildReloadTime() = 0;
    virtual void buildRange() = 0;
    virtual void goldAdd(CoinDigits &) = 0;
    virtual void repairBase(Base &) = 0;
    void updateCoolDownStatus(int &frames);
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);
    std::tuple<int, int> checkEnemyInRange(std::list<Enemy *> &enemies);
    bool operator >= (int coins);
};
