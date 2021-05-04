#include "options.hpp"

Options::Options(SDL_Renderer *renderer, SDL_Texture *asst)
{
    gRenderer = renderer;
    assets = asst;
    music = Button({0, 0, 0, 0},{0, 0, 0, 0}, {0, 0, 0, 0});
    volume = Button({0, 0, 0, 0},{0, 0, 0, 0}, {0, 0, 0, 0});
    back = Button({761,136,223,74},{1481,221,223,59}, {529,634,199,66});
    state = 5;
}
int Options::drawObjects()
{
    music.draw(gRenderer, assets);
    volume.draw(gRenderer, assets);
    back.draw(gRenderer, assets);
    return state;
}
void Options::detectClick(int x, int y)
{
    if (music.pressed(x, y))
    {
        cout << "music is pressed";
    }
    else if (volume.pressed(x, y))
    {
        cout << "music is pressed";
    }
    else if (back.pressed(x, y))
    {
        state = 0;
    }
    else
    {
        state = 5;
    }
}