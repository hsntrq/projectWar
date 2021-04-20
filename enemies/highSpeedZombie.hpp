#include "enemy.hpp"

class HighSpeedZombie : public Enemy
{
public:
    void healthCalculation();
    void death();
    void attack();
    bool followPath();
    void animateCharacter();
};