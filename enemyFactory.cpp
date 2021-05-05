#include "enemyFactory.hpp"

EnemyFactory::EnemyFactory() {}

EnemyFactory::EnemyFactory(int waveNum)
{
    totalEnemies = 5 * (waveNum + 1);
    waveGap = 100;

    paths.push_back(Path(0, 160));
    paths.push_back(Path(1, 640));
    paths.push_back(Path(2, 480));
    paths.push_back(Path(1, 960));
    paths.push_back(Path(0, 384));
    paths.push_back(Path(1, 1184));
    paths.push_back(Path(0, 0));
}

EnemyFactory::~EnemyFactory() {}

bool EnemyFactory::enemiesSpawned()
{
    return totalEnemies == 0;
}

bool EnemyFactory::waveComplete(int elapsedFrames)
{
    return elapsedFrames % waveGap == 0;
}

void EnemyFactory::spawnEnemies(list<Enemy *> &enemyList, int frames)
{
    int spawnGap = (rand() % 10) + 10;
    if (frames % spawnGap == 0)
    {
        enemyList.push_back(produceEnemy());
        totalEnemies--;
    }
}

Enemy *EnemyFactory::produceEnemy()
{
    int randomVar = rand() % 100;
    if (randomVar < 30)
    {
        return new WeakZombie(160 + rand() % 128, 576, paths);
    }
    if (randomVar > 30 && randomVar < 60)
    {
        return new NormalZombie(160 + rand() % 128, 576, paths);
    }
    if (randomVar > 60 && randomVar < 80)
    {
        return new HighHPZombie(160 + rand() % 128, 576, paths);
    }
    if (randomVar > 80 && randomVar < 90)
    {
        return new HighSpeedZombie(160 + rand() % 128, 576, paths);
    }
    if (randomVar > 90)
    {
        return new SpecialZombie(160 + rand() % 128, 576, paths);
    }
}