#include "screen.hpp"

/**
 * \brief This class stores the methods and attributes for the pause screen
 */
class Pause : public Screen
{
private:
    Button resume, quit;

public:
    /**
     * Simple constructor
     */
    Pause();

    /**
     * Constructor that initializes attributes
     */
    Pause(SDL_Renderer *renderer, SDL_Texture *asst);
    
    /**
     * draws objects (mainly buttons) to screen
     */
    int drawObjects();
    
    /**
     * detects button presses
     */
    void detectClick(int, int);
};