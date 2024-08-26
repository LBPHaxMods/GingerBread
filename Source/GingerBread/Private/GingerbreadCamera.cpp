#include "GingerbreadCamera.h"

AGingerbreadCamera::AGingerbreadCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NearClipPlaneCm = 0.00f;
    this->FarClipPlaneCm = 10000.00f;
    this->bIsActive = false;
}

bool AGingerbreadCamera::IsActive() const {
    return false;
}

void AGingerbreadCamera::ApplyNearClipPlane() {
}

void AGingerbreadCamera::ApplyFarClipPlane() {
}


