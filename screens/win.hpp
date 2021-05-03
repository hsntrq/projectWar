#include "screen.hpp"

class Win : public Screen
{
public:
    Button continueButton;

public:
    Win();
    Win(SDL_Renderer *renderer, SDL_Texture *asst);
    void drawObjects();
    int detectClick(int, int);
};