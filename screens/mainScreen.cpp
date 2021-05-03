#include "mainScreen.hpp"

MainScreen::MainScreen(SDL_Renderer *renderer, SDL_Texture *asst)
{
    gRenderer = renderer;
    assets = asst;
    newGame = Button({1067,487,225,88}, {76,86,225,88});
    instructions = Button({1031,594,297,88}, {40,223,297,88});
    options = Button({1067,374,225,88}, {76,360,225,88});
    quit = Button({1052,141,225,88}, {76,497,225,88});
}
void MainScreen::drawObjects()
{
    newGame.draw(gRenderer, assets);
    instructions.draw(gRenderer, assets);
    options.draw(gRenderer, assets);
    quit.draw(gRenderer, assets);
}
int MainScreen::detectClick(int x, int y)
{
    if (newGame.pressed(x, y))
    {
        return 7;
    }
    else if (instructions.pressed(x, y))
    {
        return 1;
    }
    else if (options.pressed(x, y))
    {
        return 5;
    }
    else if (quit.pressed(x, y))
    {
        return 8;
    }
    else
    {
        return 0;
    }
}