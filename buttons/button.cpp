#include "button.hpp"

void Button::draw(SDL_Renderer *gRenderer, SDL_Texture *assets) //selects  the sprite of the Button, updates it with drop function and then draws it
{
    //srcRect = srcSprite;
    if (!isPressed)
        SDL_RenderCopy(gRenderer, assets, &srcSprite[0], &moverRect);
    else
        SDL_RenderCopy(gRenderer, assets, &srcSprite[1], &moverRect);
}
Button::Button(SDL_Rect srcsprite_, SDL_Rect srcsprite_p, SDL_Rect moverRect_) //constructor which initiates the Button at location of given moverRect
{
    moverRect = moverRect_;
    srcSprite[0] = srcsprite_;
    srcSprite[1] = srcsprite_p;
    isPressed = false;
}

Button::Button()
{
    isPressed = false;
}


bool Button::pressed(int x, int y)
{
    if ((x >= moverRect.x && x <= moverRect.x + moverRect.w) && (y >= moverRect.y && y <= moverRect.y + moverRect.h))
    {
        isPressed = true;
        return true;
    }
    else return false;
}