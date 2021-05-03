#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <stdio.h>
// #include <emscripten.h>
// #include <emscripten/html5.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <map>
#include "gameManager.hpp"
#include "screens/instructions.hpp"
#include "screens/pause.hpp"
#include "screens/win.hpp"
#include "screens/lose.hpp"
#include "screens/options.hpp"
#include "screens/mainScreen.hpp"
#include "screens/loading.hpp"
#pragma once
/**
 * \brief This class contains attributes and methods relevant to the Graphics Window of SDL
 */

class Game
{
    //Screen dimension constants
    const int SCREEN_WIDTH = 1280;
    const int SCREEN_HEIGHT = 736;

    //The window we'll be rendering to
    SDL_Window *gWindow = NULL;

    //The window renderer
    SDL_Renderer *gRenderer = NULL;

    //Current displayed texture
    vector<SDL_Texture *> gTexture;
    //global reference to png image sheets
    SDL_Texture *assets = NULL;

    Mix_Music *bgMusic = NULL;
    vector<Screen *> Screens;
    int screenNumber = 0; // 0-> main 1-> instructions 2->NewGame 3-> Won 4-> lose 5-> options 6-> pause 7-> Loading

public:
    bool init();
    bool loadMedia();
    void close();
    SDL_Texture *loadTexture(std::string path);
    void run();
};