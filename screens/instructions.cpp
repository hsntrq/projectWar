#include "instructions.hpp"

Instructions::Instructions(SDL_Renderer *renderer, SDL_Texture *asst)
{
    gRenderer = renderer;
    assets = asst;
    backButton = Button({761,136,223,74}, {529,634,199,66});
}
void Instructions::drawObjects()
{
    backButton.draw(gRenderer, assets);
}
int Instructions::detectClick(int x, int y)
{
    if (backButton.pressed(x, y))
    {
        return 0;
    }
    return 1;
}