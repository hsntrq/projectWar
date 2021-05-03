#include "screen.hpp"

class Lose : public Screen
{
public:
    Button continueButton;

public:
Lose();
    Lose(SDL_Renderer *renderer, SDL_Texture *asst);
    void drawObjects();
    int detectClick(int, int);
};