#include "enemy.hpp"

class WeakZombie : public Enemy
{
public:
    void healthCalculation();
    void death();
    void attack();
    bool followPath();
    void animateCharacter();
};