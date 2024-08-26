#include "TreasurePodState.h"

FTreasurePodState::FTreasurePodState() {
    this->State = ETreasurePodState::Rotating;
    this->WinningPrizeIndex = 0;
    this->ActivatingSackboy = NULL;
}

