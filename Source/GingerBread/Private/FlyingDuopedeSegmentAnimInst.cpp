#include "FlyingDuopedeSegmentAnimInst.h"

UFlyingDuopedeSegmentAnimInst::UFlyingDuopedeSegmentAnimInst() {
    this->IsWalking = false;
    this->IsPickedUp = false;
    this->IsSlapped = false;
    this->IsSquashed = false;
    this->IsThrown = false;
    this->IsBlasted = false;
    this->IsSynchronising = true;
    this->IsRolledInto = false;
    this->ThrownLand = false;
    this->Speed = EFlyingDuopedeSpeed::Medium;
    this->StartPosition = 0.00f;
}

void UFlyingDuopedeSegmentAnimInst::AnimNotify_OnThrownLand() {
}

void UFlyingDuopedeSegmentAnimInst::AnimNotify_OnSynchronize() {
}

void UFlyingDuopedeSegmentAnimInst::AnimNotify_OnDestroy() {
}


