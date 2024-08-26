#include "RemixSpotlightManagerDataAsset.h"

URemixSpotlightManagerDataAsset::URemixSpotlightManagerDataAsset() {
    this->bAutoRegisterAllSpotlights = true;
    this->PenaltyType = ERemixSpotlightPenaltyType::TimeMultiplier;
    this->PenaltyTimeMultiplier = 2.00f;
    this->PenaltyTimeOffset = 2.00f;
    this->PenaltyTimeOffsetCooldown = 2.00f;
    this->bScalePenaltyForPlayerCount = false;
}


