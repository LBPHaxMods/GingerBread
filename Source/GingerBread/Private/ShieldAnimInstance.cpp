#include "ShieldAnimInstance.h"

UShieldAnimInstance::UShieldAnimInstance() {
    this->GenericState = EShieldGenericState::Invalid;
    this->DroppedState = EAIDroppedState::Invalid;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterTakeHitState = false;
    this->ExitTakeHitState = false;
    this->EnterMovementState = false;
    this->ExitMovementState = false;
    this->EnterDeathState = false;
    this->EnterBubbleState = false;
    this->ExitBubbleState = false;
    this->EnterDroppedState = false;
    this->ExitDroppedState = false;
    this->IsAlert = false;
    this->LookAtPitch = 0.00f;
    this->LookAtYaw = 0.00f;
    this->BoneLookAtPitch = 0.00f;
    this->BoneLookAtYaw = 0.00f;
}

void UShieldAnimInstance::ChangeState(EShieldGenericState NewState) {
}


