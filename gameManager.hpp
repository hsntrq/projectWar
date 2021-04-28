#include <SDL.h>
#include <list>
#include <iostream>
#include <vector>
#include "towers/tower.hpp"
#include "patches.hpp"
#include "towercards/towercard.hpp"
#include "towercards/bombcard.hpp"
#include "towercards/firecard.hpp"
#include "towercards/goldcard.hpp"
#include "towercards/repaircard.hpp"
#include "towercards/icecard.hpp"
#include "towercards/longbowcard.hpp"
#include "screens/screen.hpp"
using namespace std;

/**
 * \brief This class stores the methods and attributes necessary to carry out game logic
 */

class gameManager: public Screen
{
    list<Object *> towers;
    list<Projectile *> projectiles;
    list<Patches *> patches;
    vector<TowerCard> towerCards;
    int towerSelected; 
    bool cardClicked;

public:
    /**
     * Simple Constructor
     */
    gameManager();
    
    gameManager(SDL_Renderer *, SDL_Texture *); //constructor
    /**
     * Function to draw objects on screen
     */
    void drawObjects() override;
    /**
     * Function to spawn objects as required by game
     */
    void detectClick(int, int) override;
    /**
     * Simple Destructor
     */
    ~gameManager(); //destructor
};