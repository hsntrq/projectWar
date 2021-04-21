#include "enemy.hpp"

class NormalZombie : public Enemy
{
public:
    NormalZombie();
    NormalZombie(int x, int y);
    void healthCalculation();
    void death();
    void attack();
    bool followPath();
    void animateCharacter();
};