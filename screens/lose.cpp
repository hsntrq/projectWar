#include "lose.hpp"

Lose::Lose(SDL_Renderer *renderer, SDL_Texture *asst)
{
    gRenderer = renderer;
    assets = asst;
    continueButton = Button({768,46,199,66}, {541,556,199,66});
}
void Lose::drawObjects()
{
    continueButton.draw(gRenderer, assets);
}
int Lose::detectClick(int x, int y)
{
    if (continueButton.pressed(x, y))
    {
        return 0;
    }
}