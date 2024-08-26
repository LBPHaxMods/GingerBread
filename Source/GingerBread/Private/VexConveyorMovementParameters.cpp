#include "VexConveyorMovementParameters.h"

FVexConveyorMovementParameters::FVexConveyorMovementParameters() {
    this->StartSpeed = EVexConveyorMoveSpeedMode::Invalid;
    this->EndSpeed = EVexConveyorMoveSpeedMode::Invalid;
    this->Duration = 0.00f;
    this->MoveBackground = false;
}

