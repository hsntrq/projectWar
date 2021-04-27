#include <SDL.h>
#include <list>
#include <iostream>
#include "tower.hpp"
#include "firetower.hpp"
#include "icetower.hpp"
#include "goldtower.hpp"
#include "longbowtower.hpp"
#include "repairtower.hpp"
#include "bombtower.hpp"
#include "object.hpp"
#include "projectile.hpp"
#include "patches.hpp"

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