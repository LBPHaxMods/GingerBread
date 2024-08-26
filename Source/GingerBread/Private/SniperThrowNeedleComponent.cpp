#include "SniperThrowNeedleComponent.h"

USniperThrowNeedleComponent::USniperThrowNeedleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinDistForSpread = 0.00f;
    this->AttackSpread = 0.00f;
    this->CanUseSpread = false;
    this->MaxHorizontalThrowAngle = 40.00f;
    this->MaxUpwardsThrowAngle = 20.00f;
    this->MaxDownwardsThrowAngle = 70.00f;
    this->ThrowArc = 0.70f;
    this->ThrowGravityScale = 0.40f;
    this->PredictAheadSeconds = 0.00f;
    this->PreFlashPreThrowTime = 0.60f;
    this->PostFlashPreThrowTime = 0.70f;
    this->PostThrowAnimationDelay = 0.40f;
    this->ThrowAction = TEXT("ThrowFollowThrough");
    this->AimAtFloor = false;
}


