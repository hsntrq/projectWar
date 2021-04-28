#include "repaircard.hpp"

RepairCard::RepairCard(): RepairCard::RepairCard(1078, 643){}

RepairCard::RepairCard(int x, int y){
    isSelected = false;
    cardID = 5;
    srcSprite[0] = {270,358,114,93};
    srcSprite[1] = {270,463,114,93};
    moverRect = {x, y, 114, 92};
}