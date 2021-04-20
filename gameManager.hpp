#include <SDL.h>
#include <list>
#include <iostream>
#include "towers/tower.hpp"
#include "towers/firetower.hpp"
#include "towers/icetower.hpp"
#include "towers/goldtower.hpp"
#include "towers/longbowtower.hpp"
#include "towers/repairtower.hpp"
#include "towers/bombtower.hpp"
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