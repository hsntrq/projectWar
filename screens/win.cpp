#include "win.hpp"

Win::Win(SDL_Renderer *renderer, SDL_Texture *asst)
{
    gRenderer = renderer;
    assets = asst;
    continueButton = Button({768,46,199,66}, {541,556,199,66});
}
void Win::drawObjects()
{
    continueButton.draw(gRenderer, assets);
}
int Win::detectClick(int x, int y)
{
    if (continueButton.pressed(x, y))
    {
        return 0;
    }
}