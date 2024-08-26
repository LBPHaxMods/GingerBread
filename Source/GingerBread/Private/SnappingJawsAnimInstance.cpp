#include "SnappingJawsAnimInstance.h"

USnappingJawsAnimInstance::USnappingJawsAnimInstance() {
    this->Multiplayer = false;
    this->AnimState = ESnappingJawsState::Closed;
    this->AdditiveAnimState = ESnappingJawsAdditiveAnimState::Hit;
    this->OpeningState = false;
    this->ClosingState = false;
    this->HitAdditiveState = false;
    this->AdditiveBlendWeight = 0.00f;
    this->AdditiveTransitionTime = 0.50f;
    this->AdditiveAnimationMinTime = 0.08f;
    this->HitAdditiveAnimationTime = 1.00f;
    this->HasAdditiveAnimationFinished = true;
    this->HasAdditiveAnimationExited = true;
}

void USnappingJawsAnimInstance::SetState(ESnappingJawsState NewState) {
}


