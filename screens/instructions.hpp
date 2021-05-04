#include "screen.hpp"

class Instructions : public Screen
{
private:
    Button backButton;

public:
    Instructions();
    Instructions(SDL_Renderer *renderer, SDL_Texture *asst);
    int drawObjects();
    void detectClick(int, int);
};