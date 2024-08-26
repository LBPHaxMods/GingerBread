#include "StationaryShooterAnimInstance.h"

UStationaryShooterAnimInstance::UStationaryShooterAnimInstance() {
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterAlertState = false;
    this->ExitAlertState = true;
    this->EnterShootingState = false;
    this->ExitShootingState = false;
    this->EnterProtectingState = false;
    this->ExitProtectingState = false;
    this->EnterCelebrationState = false;
    this->ExitCelebrationState = false;
    this->EnterDeathState = false;
    this->TurningAngle = 0.00f;
    this->GenericState = EStationaryShooterGenericState::Invalid;
}

bool UStationaryShooterAnimInstance::ChangeState(EStationaryShooterGenericState NewState) {
    return false;
}


