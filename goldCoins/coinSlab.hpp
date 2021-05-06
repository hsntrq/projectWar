#include "../object.hpp"
#pragma once

/**
 * \brief This class stores the background for the gold count on screen
 */
class CoinSlab : public Object
{
public:
    /**
     * Simple constructor, initializes the moverRect and srcRect attributes
     */
    CoinSlab();
    
    /**
     * draws the coin slab on screen
     */
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);
};