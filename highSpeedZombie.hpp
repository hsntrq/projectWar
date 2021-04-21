#include "enemy.hpp"

class HighSpeedZombie : public Enemy
{
public:
    HighSpeedZombie();
    HighSpeedZombie(int x, int y);
    void healthCalculation();
    void death();
    void attack();
    bool followPath();
    void animateCharacter();
};