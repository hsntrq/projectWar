#include "lose.hpp"

Lose::Lose(SDL_Renderer *renderer, SDL_Texture *asst)
{
    gRenderer = renderer;
    assets = asst;
    continueButton = Button({768, 46, 199, 66}, {1503, 35, 199, 53}, {541, 556, 199, 66}, {541, 569, 199, 53});
    state = 4;
}
int Lose::drawObjects()
{
    continueButton.draw(gRenderer, assets);
    return state;
}
void Lose::detectClick(int x, int y)
{
    if (continueButton.pressed(x, y))
    {
        state = 0;
    }
}