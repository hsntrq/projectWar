#include "towercard.hpp"

/**
 * \brief This class stores the attributes and methods specific to the bomb tower
 * 
 */

class BombCard : public TowerCard
{
public:
    /**
     * Simple constructor
     */
    BombCard();

    /**
     * Constructor that initializes attributes
     */
    BombCard(int x, int y);
};