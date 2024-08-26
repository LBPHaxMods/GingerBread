#include "GrabReleaseInfo.h"

FGrabReleaseInfo::FGrabReleaseInfo() {
    this->ReleaseReason = EGrabAbortReason::None;
    this->ApplyCapsuleCorrection = false;
}

