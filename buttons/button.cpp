#include "button.hpp"

void Button::draw(SDL_Renderer *gRenderer, SDL_Texture *assets) //selects  the sprite of the Button, updates it with drop function and then draws it
{
    //srcRect = srcSprite;
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
}

Button::Button(SDL_Rect srcRect_, SDL_Rect moverRect_) //constructor which initiates the Button at location of given moverRect
{
    moverRect = moverRect_;
    srcRect = srcRect_;
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