#include "pause.hpp"

Pause::Pause(SDL_Renderer *renderer, SDL_Texture *asst)
{
    gRenderer = renderer;
    assets = asst;
    resume = Button({1052,35,255,85}, {512,322,255,85});
    quit = Button({1052,259,255,85}, {513,433,255,85});
}
void Pause::drawObjects()
{
    resume.draw(gRenderer, assets); // put in the button here.
    quit.draw(gRenderer, assets);
}
int Pause::detectClick(int x, int y)
{
    if (resume.pressed(x, y))
    {
        return 2;
    }
    else if (quit.pressed(x, y))
    {
        return 0;
    }
    else
    {
        return 6;
    }
}