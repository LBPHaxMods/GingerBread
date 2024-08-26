#include "SniperSpaceThrowNeedleComponent.h"

USniperSpaceThrowNeedleComponent::USniperSpaceThrowNeedleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AirDashTriggerRange = 0.00f;
    this->AirDashMaxSpeed = 0.00f;
    this->AirDashSpeedCurve = NULL;
    this->AirDashReleaseNeedleDelay = 0.00f;
}


