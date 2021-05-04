#include "screen.hpp"

class MainScreen : public Screen
{
private:
    Button newGame;
    Button instructions;
    Button options;
    Button quit;

public:
    MainScreen();
    MainScreen(SDL_Renderer *renderer, SDL_Texture *asst);
    int drawObjects();
    void detectClick(int, int);
};