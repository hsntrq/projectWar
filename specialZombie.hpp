#include "enemy.hpp"

class SpecialZombie : public Enemy
{
public:
    SpecialZombie();
    SpecialZombie(int x, int y);
    void healthCalculation();
    void death();
    void attack();
    bool followPath();
    void animateCharacter();
};