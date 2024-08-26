#include "BonusRoomTableRow.h"

FBonusRoomTableRow::FBonusRoomTableRow() {
    this->GameTime = 0.00f;
    this->MaximumSimultaneousPrizes = 0;
    this->LargePrizeSpawnMaxFrequency = 0.00f;
    this->PrizeSpawnFrequencyCurve = NULL;
    this->LargePrizeSpawnMaxProbability = 0.00f;
    this->PrizeSpawnProbabilityCurve = NULL;
}

