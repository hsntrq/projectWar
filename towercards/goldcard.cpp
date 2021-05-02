#include "goldcard.hpp"

GoldCard::GoldCard() : GoldCard::GoldCard(730, 643) {}

GoldCard::GoldCard(int x, int y)
{
    isSelected = false;
    cardID = 4;
    srcSprite[0] = {654, 358, 114, 93};
    srcSprite[1] = {654, 463, 114, 93};
    moverRect = {x, y, 114, 92};
}