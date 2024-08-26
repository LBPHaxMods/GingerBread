#include "SackboyStruggleData.h"

FSackboyStruggleData::FSackboyStruggleData() {
    this->ReleaseType = ESackboyStruggleReleaseType::None;
    this->StruggleReason = ESackboyStruggleReason::Default;
    this->AutoReleaseTime = 0.00f;
    this->ReleaseStrength = 0.00f;
    this->ButtonInputWeight = 0.00f;
    this->StickAxisInputWeight = 0.00f;
}

