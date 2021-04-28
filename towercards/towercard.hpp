#include "../object.hpp"
#pragma once
/**
 * \brief Parent class of all towers, stores methods and attributes common to them all
 */
class TowerCard : public Object
{
protected:
    SDL_Rect srcSprite[2];
    

public: //function declarations
    int cardID;
    bool isSelected;
    
    TowerCard(); // constructors (overloaded)
    /**
     * Simple constructor that initilizes the x and y locations of the tower
     * \param x is tower's x location
     * \param y is tower's y location
     */
    TowerCard(int x, int y);
    bool isClicked(int, int);
    
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);
};
