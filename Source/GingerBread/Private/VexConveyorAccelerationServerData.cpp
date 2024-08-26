#include "VexConveyorAccelerationServerData.h"

FVexConveyorAccelerationServerData::FVexConveyorAccelerationServerData() {
    this->ServerTimeStamp = 0.00f;
    this->CurrentAccelerationModeTimeStamp = 0.00f;
    this->AccelerationMode = EVexConveyorAccelerationMode::Invalid;
    this->AccelerationTimer = 0.00f;
}

