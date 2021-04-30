#include <SDL.h>
#include <list>
#include <iostream>
#include <vector>
#include "towers/tower.hpp"
#include "towercards/towercard.hpp"
#include "towercards/bombcard.hpp"
#include "towercards/firecard.hpp"
#include "towercards/goldcard.hpp"
#include "towercards/repaircard.hpp"
#include "towercards/icecard.hpp"
#include "towercards/longbowcard.hpp"
#include "enemies/enemy.hpp"
#include "enemies/highHPZombie.hpp"
#include "enemies/highSpeedZombie.hpp"
#include "enemies/normalZombie.hpp"
#include "enemies/specialZombie.hpp"
#include "enemies/weakZombie.hpp"
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
    list<Enemy *> enemies;
    vector<TowerCard> towerCards;
    list<Path> paths;
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