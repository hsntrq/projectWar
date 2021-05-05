#include "pause.hpp"

Pause::Pause(SDL_Renderer *renderer, SDL_Texture *asst)
{
    gRenderer = renderer;
    assets = asst;
    resume = Button({1052, 35, 255, 85}, {1465, 409, 255, 69}, {512, 322, 255, 85}, {512, 338, 255, 69});
    quit = Button({1052, 259, 255, 85}, {1465, 509, 255, 69}, {513, 433, 255, 85}, {513, 449, 255, 69});
    state = 6;
}
int Pause::drawObjects()
{
    resume.draw(gRenderer, assets); // put in the button here.
    quit.draw(gRenderer, assets);
    return state;
}
void Pause::detectClick(int x, int y)
{
    if (resume.pressed(x, y))
    {
        state = 2;
    }
    else if (quit.pressed(x, y))
    {
        state = 0;
    }
    else
    {
        state = 6;
    }
}