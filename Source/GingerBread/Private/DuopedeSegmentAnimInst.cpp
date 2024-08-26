#include "DuopedeSegmentAnimInst.h"

UDuopedeSegmentAnimInst::UDuopedeSegmentAnimInst() {
    this->IsWalking = false;
    this->IsPickedUp = false;
    this->IsSlapped = false;
    this->IsSquashed = false;
    this->IsThrown = false;
    this->IsBlasted = false;
    this->IsSynchronising = true;
    this->IsRolledInto = false;
    this->IsInBubble = false;
    this->Speed = EDuopedeSpeed::Slow;
    this->DuopedeState = EDuopedeState::Following;
    this->StartPosition = 0.00f;
    this->ThrownLand = false;
    this->UseStandardBladeSpinSpeedAnim = true;
    this->AdditiveAnimation = EDuopedeAdditiveAnimation::None;
    this->AdditiveBlendAlpha = 0.00f;
    this->AdditiveOutBlendTime = 0.20f;
}

void UDuopedeSegmentAnimInst::SetAdditiveAnimation(EDuopedeAdditiveAnimation InAdditiveType) {
}

void UDuopedeSegmentAnimInst::AnimNotify_OnThrownLand() {
}

void UDuopedeSegmentAnimInst::AnimNotify_OnSynchronize() {
}

void UDuopedeSegmentAnimInst::AnimNotify_OnDestroy() {
}


