#include "StompysteinPylonControllerServerState.h"

FStompysteinPylonControllerServerState::FStompysteinPylonControllerServerState() {
    this->ServerTimeStamp = 0.00f;
    this->MovementState = EStompysteinPylonMovementState::NotSpinning;
    this->CurrentMovementRequestTimeStamp = 0.00f;
    this->MovementTime = 0.00f;
    this->CurrentYawPlatform1 = 0.00f;
    this->CurrentYawPlatform2 = 0.00f;
}

