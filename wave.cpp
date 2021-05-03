#include "wave.hpp"

Wave::Wave(int waveNum)
{
    currentWave = waveNum;
    totalEnemies = 20 * currentWave;
    usedEnemies = totalEnemies;
    waveComplete = false;

    paths.push_back(Path(0, 160));
    paths.push_back(Path(1, 640));
    paths.push_back(Path(2, 480));
    paths.push_back(Path(1, 960));
    paths.push_back(Path(0, 384));
    paths.push_back(Path(1, 1184));
    paths.push_back(Path(0, 0));
}

Wave::~Wave() {}

void Wave::spawnEnemies(list<Enemy *> &enemyList)
{
    for (int i=0; i<totalEnemies; i++)
    {
        int randomVar = rand()% 100;
        if (randomVar < 30)
        {
            enemyList.push_back(new WeakZombie(160 + rand() % 128, 576, paths));
        }
        if (randomVar > 30 && randomVar < 60)
        {
            enemyList.push_back(new NormalZombie(160 + rand() % 128, 576, paths));
        }
        if (randomVar > 60 && randomVar < 80)
        {
            enemyList.push_back(new HighHPZombie(160 + rand() % 128, 576, paths));
        }
        if (randomVar > 80 && randomVar < 90)
        {
            enemyList.push_back(new HighSpeedZombie(160 + rand() % 128, 576, paths));
        }
        if (randomVar > 90)
        {
            enemyList.push_back(new SpecialZombie(160 + rand() % 128, 576, paths));
        }
    }
}