#include "enemy.hpp"

class HighHPZombie : public Enemy
{
public:
    void healthCalculation();
    void death();
    void attack();
    bool followPath();
    void animateCharacter();
};