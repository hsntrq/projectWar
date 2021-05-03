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

class Wave
{
private:
    int totalEnemies;
    list<Path> paths;
    int waveGap;

public:
    Wave();
    Wave(int);
    ~Wave();
    bool waveComplete(int);
    void spawnEnemies(list <Enemy *> &, int);
    bool enemiesSpawned();
};