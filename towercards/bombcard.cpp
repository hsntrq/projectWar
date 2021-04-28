#include "bombcard.hpp"

BombCard::BombCard(): BombCard::BombCard(498, 643){}

BombCard::BombCard(int x, int y){
    isSelected = false;
    cardID = 1;
    srcSprite[0] = {142,358,114,93};
    srcSprite[1] = {142,463,114,93};
    moverRect = {x, y, 114, 92};
}