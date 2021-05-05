#include "options.hpp"

Options::Options(SDL_Renderer *renderer, SDL_Texture *asst)
{
    gRenderer = renderer;
    assets = asst;
    music = Button({287, 877, 223, 74}, {44, 878, 223, 59}, {835, 216, 223, 74}, {835, 231, 223, 59});
    volume = Button({287, 877, 223, 74}, {44, 878, 223, 59}, {835, 411, 223, 74}, {835, 426, 223, 59});
    back = Button({761, 136, 223, 74}, {1481, 221, 223, 59}, {529, 634, 223, 74}, {529, 649, 223, 59});
    state = 5;
}
int Options::drawObjects()
{
    music.draw(gRenderer, assets);
    volume.draw(gRenderer, assets);
    back.draw(gRenderer, assets);
    if (state1)
    {
        state1 = false;
        music.reset();
        return state;
    }
    if (state2)
    {
        state2 = false;
        volume.reset();
        return state;
    }
    return state;
}
void Options::detectClick(int x, int y)
{
    if (music.pressed(x, y))
    {
        if (Mix_PausedMusic() == 1)
        {
            //Resume the music
            Mix_ResumeMusic();
        }
        //If the music is playing
        else
        {
            //Pause the music
            Mix_PauseMusic();
        }
        cout << "music is pressed";

        state1 = true;
    }
    else if (volume.pressed(x, y))
    {
        cout << "music is pressed";
        state2 = true;
    }
    else if (back.pressed(x, y))
    {
        state = 0;
    }
}