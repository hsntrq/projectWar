#include "screen.hpp"

class Loading : public Screen
{
private:
    int frame;
    int state;
    SDL_Rect srcRect_r;
    SDL_Rect moverRect_r;
    SDL_Rect srcRect_l;
    SDL_Rect moverRect_l;
    SDL_Rect srcRect_ri;
    SDL_Rect moverRect_ri;

public:
    Loading();
    Loading(SDL_Renderer *renderer, SDL_Texture *asst);
    int drawObjects();
    void detectClick(int, int);
};