#include "enemy.hpp"

/**
 * \brief This class stores the attributes and functions specific to the weak zombie
 * 
 */
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