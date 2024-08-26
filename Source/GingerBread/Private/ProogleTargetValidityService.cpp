#include "ProogleTargetValidityService.h"

UProogleTargetValidityService::UProogleTargetValidityService() {
    this->AttackType = EAttackType::Normal;
    this->Hysteresis = 0.00f;
}

void UProogleTargetValidityService::SackboyDied(ASackboy* Sackboy) {
}


