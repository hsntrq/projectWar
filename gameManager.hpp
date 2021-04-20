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
using namespace std;
class gameManager
{
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;
    list<Object *> towers;

public:
    gameManager(SDL_Renderer *, SDL_Texture *); //constructor
    void drawObjects();
    void createObject(int, int);
    ~gameManager(); //destructor
};