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
using namespace std;

/**
 * This class stores the methods and attributes necessary to carry out game logic
 */

class gameManager
{
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;
    list<Object *> towers;
    list<Projectile *> projectiles;

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
    void createObject(int, int);
    /**
     * Simple Destructor
     */
    ~gameManager(); //destructor
};