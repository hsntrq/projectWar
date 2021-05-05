#include "object.hpp"

class Base: public Object
{
private:
    SDL_Rect greenStrip;
    SDL_Rect greenMoverRect;

    SDL_Rect redStrip;
    SDL_Rect redMoverRect;

    int health;
    int greenRectWidth;

public:
    Base();
    ~Base();
    void decreaseHealth(int);
    void increaseHealth(int);
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);
};