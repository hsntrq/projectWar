#include "screen.hpp"

/**
 * \brief This class stores the methods and attributes for the lose screen
 */
class Lose : public Screen
{
private:
    Button continueButton;

public:
    /**
     * Simple constructor
     */
    Lose();

    /**
     * Constrcutor that initalizes attributes
     */
    Lose(SDL_Renderer *renderer, SDL_Texture *asst);
    
    /**
     * draws objects (relevant buttons) on screen)
     */
    int drawObjects();

    /**
     * detects whether buttons have been clicked or not
     */
    void detectClick(int, int);
};