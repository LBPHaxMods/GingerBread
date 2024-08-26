#include "TotemMasterAnimInstance.h"

UTotemMasterAnimInstance::UTotemMasterAnimInstance() {
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterFlightState = false;
    this->ExitFlightState = false;
    this->EnterShootState = false;
    this->ExitShootState = false;
    this->EnterOverdriveState = false;
    this->ExitOverdriveState = false;
    this->EnterHitReactionState = false;
    this->ExitHitReactionState = false;
    this->EnterFloorState = false;
    this->ExitFloorState = false;
    this->EnterDeathState = false;
    this->ExitFlightLoop = false;
    this->TurningAngle = 0.00f;
    this->GenericState = ETotemMasterGenericState::Invalid;
}

bool UTotemMasterAnimInstance::ChangeState(ETotemMasterGenericState NewState) {
    return false;
}


