#include "VexFinalFight2ArenaDistanceServerState.h"

FVexFinalFight2ArenaDistanceServerState::FVexFinalFight2ArenaDistanceServerState() {
    this->ServerTimeStamp = 0.00f;
    this->Fight2DistanceState = EVexFinalFight2ArenaDistanceState::Away;
    this->CurrentFight2DistanceTimeStamp = 0.00f;
    this->Fight2DistanceTimer = 0.00f;
}

