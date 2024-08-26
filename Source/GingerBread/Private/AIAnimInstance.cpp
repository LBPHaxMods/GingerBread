#include "AIAnimInstance.h"

UAIAnimInstance::UAIAnimInstance() {
    this->DeathType = EAIDeathType::Slap;
    this->HitType = EAIHitState::Invalid;
    this->PlayRateDeviated = 1.00f;
    this->PlayRateAbsDeviation = 0.05f;
    this->CurrentSpeed = 0.00f;
}

void UAIAnimInstance::Update(const float DeltaTime) {
}


