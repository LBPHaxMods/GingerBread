#include "PopshotRecoilComponent.h"

UPopshotRecoilComponent::UPopshotRecoilComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KnockbackDistance = 0.00f;
    this->KnockbackSpeedCurve = NULL;
    this->KnockbackMaxSpeed = 0.00f;
    this->KnockbackRotationSpeed = 360.00f;
    this->RecoilRecoveryTime = 0.00f;
    this->HitWallRecoveryTime = 0.00f;
    this->IsSpinning = false;
}


