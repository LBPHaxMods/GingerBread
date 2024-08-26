#include "FishPlatformAnimInstance.h"

UFishPlatformAnimInstance::UFishPlatformAnimInstance() {
    this->MaximumAsleepOrWaitingStartPosition = 0.50f;
    this->MaximumSignalingStartPosition = 0.30f;
    this->MaximumMovingStartPosition = 0.15f;
    this->MovementSpeedAlpha = 0.00f;
    this->AsleepOrWaitingStartPosition = 0.00f;
    this->SignalingStartPosition = 0.00f;
    this->MovingStartPosition = 0.00f;
    this->EnterAsleepOrWaiting = false;
    this->ExitAsleepOrWaiting = false;
    this->EnterSignaling = false;
    this->ExitSignaling = false;
    this->EnterMoving = false;
    this->ExitMoving = false;
}


