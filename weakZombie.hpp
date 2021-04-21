#include "enemy.hpp"

class WeakZombie : public Enemy
{
public:
    WeakZombie();
    WeakZombie(int x, int y);
    void healthCalculation();
    void death();
    void attack();
    bool followPath();
    void animateCharacter();
};