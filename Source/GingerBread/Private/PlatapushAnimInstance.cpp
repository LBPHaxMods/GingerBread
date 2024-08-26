#include "PlatapushAnimInstance.h"

UPlatapushAnimInstance::UPlatapushAnimInstance() {
    this->IsEyeTracking = false;
    this->IdleIndex = 0;
    this->EyeTrackingAlpha = 0.00f;
    this->HitReact = false;
    this->HitReactMon = NULL;
    this->Pitch = 0.00f;
    this->Yaw = 0.00f;
    this->isState_IN_IDLE = false;
    this->isState_TELL = false;
    this->isState_PUSH = false;
    this->isState_OUT_IDLE = false;
    this->isState_LAUNCH = false;
    this->isState_RETRACTION = false;
    this->isState_COOLDOWN = false;
    this->isState_SHAKEOFF = false;
    this->CurrentState = EPlatapushState_C::IN_IDLE;
    this->PreviousState = EPlatapushState_C::IN_IDLE;
}

void UPlatapushAnimInstance::PostEvaluationAnimation() {
}

void UPlatapushAnimInstance::AnimNotify_OnIdleEnd() {
}


