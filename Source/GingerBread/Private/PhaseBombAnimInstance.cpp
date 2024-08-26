#include "PhaseBombAnimInstance.h"

UPhaseBombAnimInstance::UPhaseBombAnimInstance() {
    this->IdleState = false;
    this->ExpandingState = false;
    this->OpenState = false;
    this->ContractingState = false;
    this->CanTransitionToContractingAnim = false;
    this->CanTransitionToOpenAnim = false;
    this->ScaledLightRadius = 0.00f;
    this->HitState = false;
    this->InitialHitPlayed = false;
    this->CloseAnimFinished = false;
    this->CanReenterHitFromActive = true;
}


