#include "screen.hpp"

/**
 * \brief This class stores the methods and attributes for the options screen
 */
class Options : public Screen
{
private:
    Button music, volume, back;
    bool state1, state2;

public:
    /**
     * Simple constructor
     */
    Options();

    /**
     * Constructor that initalizes the attributes
     */
    Options(SDL_Renderer *renderer, SDL_Texture *asst);
    
    /**
     * draws objects to screen
     */
    int drawObjects();

    /**
     * detects button presses
     */
    void detectClick(int, int);
};