#include "SplineFollowingLink.h"

USplineFollowingLink::USplineFollowingLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Chain = NULL;
    this->bShouldReward = true;
    this->PanicDelayTime = 0.00f;
    this->SplineLength = 0.00f;
    this->CatchUpSpeed = 0.00f;
    this->RegularSpeed = 0.00f;
}

bool USplineFollowingLink::IsPanicking() const {
    return false;
}

void USplineFollowingLink::ExtendCatchUpTime(float ExtensionTime) {
}

void USplineFollowingLink::CatchUp(float TimeToReachLink) {
}


