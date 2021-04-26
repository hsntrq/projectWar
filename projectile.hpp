#include "object.hpp"

class Projectile: public Object
{
    protected:
    SDL_Rect approaching = {0, 0, 160, 133};
    SDL_Rect landed = {494, 298, 144, 117};
    

    public:
    bool reachedTarget = false;
    Projectile(int x, int y);
    ~Projectile();
    void shoot(int targetX, int targetY);
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);
};