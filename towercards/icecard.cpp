#include "icecard.hpp"

IceCard::IceCard(): IceCard::IceCard(846, 643){}

IceCard::IceCard(int x, int y){
    isSelected = false;
    srcSprite = {{526,358,114,93}, {526,463,114,93}};
    moverRect = {x, y, 114, 92};
}