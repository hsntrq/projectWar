#include "enemy.hpp"

class SpecialZombie : public Enemy
{
public:
    void healthCalculation();
    void death();
    void attack();
    bool followPath();
    void animateCharacter();
};