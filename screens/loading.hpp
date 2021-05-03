#include "screen.hpp"

class Loading : public Screen
{
private:
    int frame;
    int state;
    SDL_Rect srcRect_;
    SDL_Rect moverRect_;
public:
    Loading();
    Loading(SDL_Renderer *renderer, SDL_Texture *asst);
    void drawObjects();
    int detectClick(int, int);
};