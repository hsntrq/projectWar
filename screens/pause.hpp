#include "screen.hpp"

class Pause : public Screen
{
private:
    Button resume, quit;

public:
    Pause();
    Pause(SDL_Renderer *renderer, SDL_Texture *asst);
    int drawObjects();
    void detectClick(int, int);
};