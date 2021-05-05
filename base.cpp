#include "base.hpp"

Base::Base()
{
    greenStrip = {647,766,205,15};
    greenMoverRect = {1059,27,205,15};

    redStrip = {647,803,205,15};
    redMoverRect = {1059,27,205,15};

    health = 205;
    greenRectWidth = 205;
}

Base::~Base() {}

void Base::decreaseHealth(int baseDamage)
{
    health -= baseDamage;
    if (greenRectWidth <= 0+baseDamage)
    {
        greenRectWidth = 0;
        greenMoverRect = {1059, 27, greenRectWidth, 15};
    }
    else if (greenRectWidth > 0+baseDamage)
    {
        greenRectWidth -= baseDamage;
        greenMoverRect = {1059, 27, greenRectWidth, 15};
    }
}

Base &Base::operator+=(int repair)
{
    health += repair;
    return *this;
}

void Base::increaseHealth(int baseRepair)
{
    health += baseRepair;
    if (greenRectWidth >= 205-baseRepair)
    {
        greenRectWidth = 205;
        greenMoverRect = {1059, 27, greenRectWidth, 15};
    }
    else if (greenRectWidth < 205-baseRepair)
    {
        greenRectWidth += baseRepair;
        greenMoverRect = {1059, 27, greenRectWidth, 15};
    }
}

void Base::draw(SDL_Renderer *gRenderer, SDL_Texture *assets)
{
    SDL_RenderCopy(gRenderer, assets, &redStrip, &redMoverRect);
    SDL_RenderCopy(gRenderer, assets, &greenStrip, &greenMoverRect);
}