#include "enemy.hpp"

/**
 * \brief This class stores the attributes and methods specific to the Normal Zombie
 * 
 */
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