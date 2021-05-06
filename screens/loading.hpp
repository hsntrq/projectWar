#include "screen.hpp"

/**
 * \brief This class stores the methods and attributes for the loading screen
 */
class Loading : public Screen
{
private:
    int frame;
    int state;
    SDL_Rect srcRect_r;
    SDL_Rect moverRect_r;
    SDL_Rect srcRect_l;
    SDL_Rect moverRect_l;
    SDL_Rect srcRect_ri;
    SDL_Rect moverRect_ri;

public:
    /**
     * Simple constructor, does nothing to attributes
     */
    Loading();

    /**
     * Simple constructor, initilizes all the attributes
     */
    Loading(SDL_Renderer *renderer, SDL_Texture *asst);
    
    /**
     * draws objects to the screen
     */
    int drawObjects();

    /**
     * detects clicks based on passed parameters
     */
    void detectClick(int, int);
};