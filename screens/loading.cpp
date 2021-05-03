#include "loading.hpp"

Loading::Loading(SDL_Renderer *renderer, SDL_Texture *asst)
{
    gRenderer = renderer;
    assets = asst;
    frame = 20;
    state = 7;
    srcRect_ = {657,248,16,14};
    moverRect_ = {40, 720, frame, 20};
}
void Loading::drawObjects()
{
    moverRect_ = {40, 720, frame, 20};
    SDL_RenderCopy(gRenderer, assets, &srcRect_, &moverRect_);
    if (frame >= 1240) state = 2;
    else frame+=40;
}
int Loading::detectClick(int x, int y)
{
    return state;
}