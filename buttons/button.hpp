#include "../object.hpp"
#include "SDL_mixer.h"
#pragma once

/**
 * \brief This class stores the button sprites, pressed status, and pressing effect
 */

class Button : public Object
{
private:
    bool isPressed;
    SDL_Rect srcSprite[2];
    SDL_Rect moverSprite[2];
    Mix_Chunk *clickSoundEffect = NULL;

public:

    /**
     * Basic constructor, not attributes inialized
     */
    Button();

    /**
     * Construtor that initializes the attributes of moverSprite and srcSprite and isPressed and clickSoundEffect
     * \param srcsprite_ is of type SDL_Rect
     * \param srcsprite_p is of type SDL_Rect
     * \param moverRect_ is of type SDL_Rect
     * \param moverRect_p is of type SDL_Rect
     */
    Button(SDL_Rect srcsprite_, SDL_Rect srcsprite_p, SDL_Rect moverRect_, SDL_Rect moverRect_p);
    
    /**
     * Draws the passed texture on screen
     */
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);
    
    /**
     * changes the state of the attributes, called when button is pressed
     */
    bool pressed(int, int);
    
    /**
     * resets the state of isPressed to false
     */
    void reset();

    /**
     * Simple destructor
     */
    ~Button();
};