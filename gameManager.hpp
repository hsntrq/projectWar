#include <SDL.h>
#include "unit.hpp"
#include <list>
#include <iostream>
using namespace std;
class gameManager
{
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;
public:
    gameManager(SDL_Renderer *, SDL_Texture *); //constructor
    void drawObjects();
    void createObject(int, int);
    ~gameManager(); //destructor
};