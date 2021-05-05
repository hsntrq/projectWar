#include "instructions.hpp"

Instructions::Instructions(SDL_Renderer *renderer, SDL_Texture *asst)
{
    gRenderer = renderer;
    assets = asst;
    backButton = Button({761, 136, 223, 74}, {1481, 221, 223, 59}, {529, 634, 223, 74}, {529, 649, 223, 59});
    state = 1;
}
int Instructions::drawObjects()
{
    backButton.draw(gRenderer, assets);
    return state;
}
void Instructions::detectClick(int x, int y)
{
    if (backButton.pressed(x, y))
    {
        state = 0;
    }
}