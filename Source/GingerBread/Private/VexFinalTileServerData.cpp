#include "VexFinalTileServerData.h"

FVexFinalTileServerData::FVexFinalTileServerData() {
    this->ServerTimeStamp = 0.00f;
    this->TileState = EVexFinalTileState::NotMoving;
    this->StateTimer = 0.00f;
    this->FloatyWobbleDuration = 0.00f;
}

