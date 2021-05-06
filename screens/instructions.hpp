#include "screen.hpp"

/**
 * \brief This class stores the methods and attributes for the instructions screen
 */

class Instructions : public Screen
{
private:
    Button backButton;

public:
    /**
     * Simple constructor, does nothing to attributes
     */
    Instructions();
    
    /**
     * Constructor which initializes the the attributes
     */
    Instructions(SDL_Renderer *renderer, SDL_Texture *asst);
    
    /**
     * draws relevant button (back button) to the screen
     */
    int drawObjects();

    /**
     * detects whether the back button has been pressed or not based on recieved coordinates via parameters
     * \param x is x coordinate of click
     * \param y is y coordinate of click
     */
    void detectClick(int, int);
};