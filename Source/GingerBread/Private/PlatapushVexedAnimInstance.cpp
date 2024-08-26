#include "PlatapushVexedAnimInstance.h"

UPlatapushVexedAnimInstance::UPlatapushVexedAnimInstance() {
    this->HitReact = false;
    this->IdleStartTime = 0.00f;
    this->HitReactMon = NULL;
}

void UPlatapushVexedAnimInstance::AnimNotify_OnIdleEnd() {
}


