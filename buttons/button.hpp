#include "../object.hpp"

class Button : public Object
{
private:
    bool isPressed;

public:
    Button();
    Button(SDL_Rect, SDL_Rect);
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);

    bool pressed(int, int);
};