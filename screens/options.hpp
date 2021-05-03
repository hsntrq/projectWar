#include "screen.hpp"

class Options : public Screen
{
private:
    Button music, volume, back;

public:
    Options();
    Options(SDL_Renderer *renderer, SDL_Texture *asst);
    void drawObjects();
    int detectClick(int, int);
};