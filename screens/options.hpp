#include "screen.hpp"

class Options : public Screen
{
private:
    Button music, volume, back;

public:
    Options();
    Options(SDL_Renderer *renderer, SDL_Texture *asst);
    int drawObjects();
    void detectClick(int, int);
};