#include "object.hpp"
#pragma once

/**
 * \brief This class stores the attributes of the base, defending which the user has to defend
 */
class Base : public Object
{
private:
    SDL_Rect greenStrip;
    SDL_Rect greenMoverRect;

    SDL_Rect redStrip;
    SDL_Rect redMoverRect;

    int greenRectWidth;

public:
    int health;
    /**
     *  Simple constructor that initializes the Base class attributes
     */
    Base();

    /**
     * Simple destructor
     */
    ~Base();

    /**
     * Function to decrease health of the base by input parameter
     */
    void decreaseHealth(int);

    /**
     * Function to increase health of the base by input parameter
     */
    void increaseHealth(int);

    /**
     * draws base health bar on the screen
     */
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);

    /**
     * Operator overload
     */
    Base &operator+=(int);
};
