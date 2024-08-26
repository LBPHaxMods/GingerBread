#include "StompyChaseComponent.h"

UStompyChaseComponent::UStompyChaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreferredSeperationFromTarget = 0.00f;
    this->LockDirectionAfterHitDuration = 0.00f;
    this->LockDirectionAfterHitDistance = 0.00f;
    this->SpinChaseCurveRate = 0.00f;
    this->SpinChaseTargetDistance = 0.00f;
}


