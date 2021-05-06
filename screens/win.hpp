#include "screen.hpp"

/**
 * \brief This class stores the methods and attributes for the win screen
 */
class Win : public Screen
{
private:
    Button continueButton;

public:
    /**
     * Simple constructor
     */
    Win();

    /**
     * Constructor that initializes attributes
     */
    Win(SDL_Renderer *renderer, SDL_Texture *asst);
    
    /**
     * Draws objects to screen
     */
    int drawObjects();
    
    /**
     * Detects button presses and sets state accordingly
     */
    void detectClick(int, int);
};