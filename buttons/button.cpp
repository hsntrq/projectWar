#include "button.hpp"

void Button::draw(SDL_Renderer *gRenderer, SDL_Texture *assets) //selects  the sprite of the Button, updates it with drop function and then draws it
{
    //srcRect = srcSprite;
    if (!isPressed)
        SDL_RenderCopy(gRenderer, assets, &srcSprite[0], &moverSprite[0]);
    else
        SDL_RenderCopy(gRenderer, assets, &srcSprite[1], &moverSprite[1]);
}

Button::Button(SDL_Rect srcsprite_, SDL_Rect srcsprite_p, SDL_Rect moverRect_, SDL_Rect moverRect_p)
{
    moverSprite[0] = moverRect_;
    moverSprite[1] = moverRect_p;
    srcSprite[0] = srcsprite_;
    srcSprite[1] = srcsprite_p;
    isPressed = false;
    clickSoundEffect = Mix_LoadWAV("assets/click_low.wav");
}

Button::Button()
{
    isPressed = false;
}
void Button::reset()
{
    isPressed = false;
}
bool Button::pressed(int x, int y)
{
    if ((x >= moverSprite[0].x && x <= moverSprite[0].x + moverSprite[0].w) && (y >= moverSprite[0].y && y <= moverSprite[0].y + moverSprite[0].h))
    {
        isPressed = true;
        Mix_PlayChannel(1, clickSoundEffect, 0);
        return true;
    }
    else
        return false;
}

