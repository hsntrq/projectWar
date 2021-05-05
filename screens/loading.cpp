#include "loading.hpp"

Loading::Loading(SDL_Renderer *renderer, SDL_Texture *asst)
{
    gRenderer = renderer;
    assets = asst;
    frame = 0;
    state = 7;
    srcRect_r = {106, 791, 67, 36};
    moverRect_r = {169, 600, 67, 36};
    srcRect_l = {48, 788, 36, 36};
    moverRect_l = {151, 600, 36, 36};
    srcRect_ri = {48, 788, 36, 36};
    moverRect_ri = {218, 600, 36, 36};
    state = 7;
}
int Loading::drawObjects()
{
    moverRect_ri = {218 + frame, 600, 36, 36};
    moverRect_r = {169, 600, 67 + frame, 36};
    SDL_RenderCopy(gRenderer, assets, &srcRect_l, &moverRect_l);
    SDL_RenderCopy(gRenderer, assets, &srcRect_r, &moverRect_r);
    SDL_RenderCopy(gRenderer, assets, &srcRect_ri, &moverRect_ri);
    if (frame >= 928-72)
        state = 2;
    else
        frame += 7;
    return state;
}
void Loading::detectClick(int x, int y) {}