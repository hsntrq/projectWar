#include "object.hpp"
#include "enemies/enemy.hpp"
#include "enemies/highHPZombie.hpp"
#include "enemies/highSpeedZombie.hpp"
#include "enemies/normalZombie.hpp"
#include "enemies/specialZombie.hpp"
#include "enemies/normalZombie.hpp"
#include "enemies/weakZombie.hpp"
#include <list>

#pragma once
/**
 *  \brief This class produces enemies for each wave, based on factory design pattern
 */
class EnemyFactory
{
private:
    int totalEnemies;
    list<Path> paths;
    int waveGap;

public:
    /**
     * Simple constructor
     */
    EnemyFactory();

    /**
     * Simple constructor that assigns values to attributes
     */
    EnemyFactory(int);

    /**
     * Simple Destructor
     */
    ~EnemyFactory();

    /**
     * checks if wave is complete
     */
    bool waveComplete(int);

    /**
     * builds enemies as required
     */
    void spawnEnemies(list<Enemy *> &, int);
    
    /**
     * returns false if all enemies in a wave have been spawned
     */
    bool enemiesSpawned();

    /**
     * produces one enemy object
     */
    Enemy *produceEnemy();
};