#include "bombcard.hpp"

BombCard::BombCard(): BombCard::BombCard(498, 643){}

BombCard::BombCard(int x, int y){
    isSelected = false;
    srcSprite = {{142,358,114,93}, {142,463,114,93}};
    moverRect = {x, y, 114, 92};
}