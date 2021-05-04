#include "../object.hpp"

class Button : public Object
{
private:
    bool isPressed;
    SDL_Rect srcSprite[2];

public:
    Button();
    Button(SDL_Rect srcsprite_, SDL_Rect srcsprite_p, SDL_Rect moverRect_);
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);
    bool pressed(int, int);
};