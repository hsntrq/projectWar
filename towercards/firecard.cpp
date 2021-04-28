#include "firecard.hpp"

FireCard::FireCard(): FireCard::FireCard(614, 643){}

FireCard::FireCard(int x, int y){
    isSelected = false;
    srcSprite = {{15,358,113,93}, {15,463,113,93}};
    moverRect = {x, y, 114, 92};
}