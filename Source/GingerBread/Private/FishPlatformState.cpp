#include "FishPlatformState.h"

FFishPlatformState::FFishPlatformState() {
    this->CurrentStopIndex = 0;
    this->TargetStopIndex = 0;
    this->CurrentAction = EFishPlatformAction::Asleep;
    this->IsLoopingForwards = false;
}

