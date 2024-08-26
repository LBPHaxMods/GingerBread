#include "MoveTarget.h"

FMoveTarget::FMoveTarget() {
    this->EnableRotation = false;
    this->EnableScale = false;
    this->RelativePosition = false;
    this->RelativeRotation = false;
    this->RelativeScale = false;
    this->DoOffset = false;
    this->AutoPlay = false;
    this->initialTime = 0.00f;
    this->SpeedMul = 0.00f;
    this->ConstantRotationMultiplier = 0.00f;
    this->IsPlaying = false;
    this->Timer = 0.00f;
    this->CurrentClip = 0;
    this->IsInitialised = false;
    this->IsLerping = false;
}

