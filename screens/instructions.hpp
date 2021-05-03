#include "screen.hpp"

class Instructions : public Screen
{
private:
    Button continueButton;

public:
    Instructions();
    Instructions(SDL_Renderer *renderer, SDL_Texture *asst);
    void drawObjects();
    int detectClick(int, int);
};