#include "MamapedeServerMovementState.h"

FMamapedeServerMovementState::FMamapedeServerMovementState() {
    this->CurrentServerTimeStamp = 0.00f;
    this->CurrentRequestTimestamp = 0.00f;
    this->MovementTime = 0.00f;
    this->SmoothMoveTime = 0.00f;
    this->IsMoving = false;
}

