#include "screen.hpp"

/**
 * \brief This class stores the methods and attributes for the main screen
 */
class MainScreen : public Screen
{
private:
    Button newGame;
    Button instructions;
    Button options;
    Button quit;

public:
    /**
     * Simple constructor
     */
    MainScreen();

    /**
     * Simple constructor, initializes attributes
     */
    MainScreen(SDL_Renderer *renderer, SDL_Texture *asst);
    
    /**
     * Draws objects to screen, mainly buttons
     */
    int drawObjects();

    /**
     * Checks if buttons are pressed 
     */
    void detectClick(int, int);
};