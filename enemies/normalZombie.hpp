#include "enemy.hpp"

class NormalZombie : public Enemy
{
public:
    void healthCalculation();
    void death();
    void attack();
    bool followPath();
    void animateCharacter();
};