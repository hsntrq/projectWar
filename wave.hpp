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
    int currentWave, totalEnemies, usedEnemies, normal, weak, speed, healthy, special;
    bool waveComplete;
    list<Path> paths;

public:
    Wave(int);
    ~Wave();
    void spawnEnemies(list <Enemy *> &);
};