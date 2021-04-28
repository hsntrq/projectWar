#include "../object.hpp"
#pragma once
/**
 * \brief Parent class of all towers, stores methods and attributes common to them all
 */
class TowerCard : public Object
{
protected:
    SDL_Rect srcSprite[2];
    bool isSelected;

public: //function declarations
    TowerCard(); // constructors (overloaded)
    /**
     * Simple constructor that initilizes the x and y locations of the tower
     * \param x is tower's x location
     * \param y is tower's y location
     */
    TowerCard(int x, int y);
    
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);
};
