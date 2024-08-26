#include "PowerPinUnlockDataRow.h"

FPowerPinUnlockDataRow::FPowerPinUnlockDataRow() {
    this->PowerPin = EPowerPin::None;
    this->Requirement = 0.00f;
    this->RequirementType = EChallengeRequirementType::Integer;
}

