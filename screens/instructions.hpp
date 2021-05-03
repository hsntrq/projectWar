#include "screen.hpp"

class Instructions : public Screen
{
private:
    Button backButton;

public:
    Instructions();
    Instructions(SDL_Renderer *renderer, SDL_Texture *asst);
    void drawObjects();
    int detectClick(int, int);
};