#include "screen.hpp"

class Lose : public Screen
{
public:
    Button continueButton;

public:
    Lose();
    Lose(SDL_Renderer *renderer, SDL_Texture *asst);
    int drawObjects();
    void detectClick(int, int);
};