#include "enemy.hpp"

/**
 * \brief This class stores the attributes and functions specific to the special zombie
 * 
 */
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