#include "longbowcard.hpp"

LongBowCard::LongBowCard(): LongBowCard::LongBowCard(962, 643){}

LongBowCard::LongBowCard(int x, int y){
    isSelected = false;
    srcSprite = {{398,358,114,93}, {398,463,114,93}};
    moverRect = {x, y, 114, 92};
}