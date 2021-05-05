#include "../object.hpp"
#include "SDL_mixer.h"
#pragma once

class Button : public Object
{
private:
    bool isPressed;
    SDL_Rect srcSprite[2];
    SDL_Rect moverSprite[2];
    Mix_Chunk *clickSoundEffect = NULL;

public:
    Button();
    Button(SDL_Rect srcsprite_, SDL_Rect srcsprite_p, SDL_Rect moverRect_, SDL_Rect moverRect_p);
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);
    bool pressed(int, int);
    void reset();
    ~Button();
};