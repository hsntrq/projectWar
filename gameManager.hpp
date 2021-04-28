#include <SDL.h>
#include <list>
#include <iostream>
#include <vector>
#include "towers/tower.hpp"
#include "towers/firetower.hpp"
#include "towers/icetower.hpp"
#include "towers/goldtower.hpp"
#include "towers/longbowtower.hpp"
#include "towers/repairtower.hpp"
#include "towers/bombtower.hpp"
#include "object.hpp"
#include "projectile/projectile.hpp"
#include "patches.hpp"
#include "projectile/firetowerprojectile.hpp"
#include "projectile/bombtowerprojectile.hpp"
#include "projectile/longbowtowerprojectile.hpp"
#include "projectile/icetowerprojectile.hpp"
#include "towercards/towercard.hpp"
#include "towercards/bombcard.hpp"
#include "towercards/firecard.hpp"
#include "towercards/goldcard.hpp"
#include "towercards/repaircard.hpp"
#include "towercards/icecard.hpp"
#include "towercards/longbowcard.hpp"
using namespace std;

/**
 * \brief This class stores the methods and attributes necessary to carry out game logic
 */

class gameManager
{
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;
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
    gameManager(SDL_Renderer *, SDL_Texture *); //constructor
    /**
     * Function to draw objects on screen
     */
    void drawObjects();
    /**
     * Function to spawn objects as required by game
     */
    void detectClick(int, int);
    /**
     * Simple Destructor
     */
    ~gameManager(); //destructor
};