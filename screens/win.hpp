#include "screen.hpp"

class Win : public Screen
{
public:
    Button continueButton;

public:
    Win();
    Win(SDL_Renderer *renderer, SDL_Texture *asst);
    int drawObjects();
    void detectClick(int, int);
};