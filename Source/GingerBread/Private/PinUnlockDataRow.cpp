#include "PinUnlockDataRow.h"

FPinUnlockDataRow::FPinUnlockDataRow() {
    this->UniqueId = 0;
    this->Category = EPinCategory::GamePlay;
    this->TophyGrade = EPinTrophyGrade::None;
    this->IsHidden = false;
    this->bResetOnFailure = false;
    this->PrizeID = 0;
}

