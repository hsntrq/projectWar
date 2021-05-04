#include "mainScreen.hpp"

MainScreen::MainScreen(SDL_Renderer *renderer, SDL_Texture *asst)
{
    gRenderer = renderer;
    assets = asst;
    newGame = Button({1067,487,225,88},{1480,609,225,72}, {76,86,225,88});
    instructions = Button({1031,594,297,88},{1453,120,297,72}, {40,223,297,88});
    options = Button({1067,374,225,88},{1490,701,225,72}, {76,360,225,88});
    quit = Button({1052,141,225,88},{1479,308,225,72}, {76,497,225,88});
    state = 0;
}
int MainScreen::drawObjects()
{
    newGame.draw(gRenderer, assets);
    instructions.draw(gRenderer, assets);
    options.draw(gRenderer, assets);
    quit.draw(gRenderer, assets);
    return state;
}
void MainScreen::detectClick(int x, int y)
{
    if (newGame.pressed(x, y))
    {
        state = 7;
    }
    else if (instructions.pressed(x, y))
    {
        state = 1;
    }
    else if (options.pressed(x, y))
    {
        state = 5;
    }
    else if (quit.pressed(x, y))
    {
        state = 8;
    }
    else
    {
        state = 0;
    }
}