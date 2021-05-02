#include "icecard.hpp"

IceCard::IceCard() : IceCard::IceCard(846, 643) {}

IceCard::IceCard(int x, int y)
{
    isSelected = false;
    cardID = 2;
    srcSprite[0] = {526, 358, 114, 93};
    srcSprite[1] = {526, 463, 114, 93};
    moverRect = {x, y, 114, 92};
}