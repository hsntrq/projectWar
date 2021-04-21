#include "enemy.hpp"

class HighHPZombie : public Enemy
{
public:
    HighHPZombie();
    HighHPZombie(int x, int y);
    void healthCalculation();
    void death();
    void attack();
    bool followPath();
    void animateCharacter();
};