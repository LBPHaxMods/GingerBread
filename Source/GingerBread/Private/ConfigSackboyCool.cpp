#include "ConfigSackboyCool.h"

UConfigSackboyCool::UConfigSackboyCool() {
    this->ScoreAwardedPerScoreBubble = 10;
    this->MultiplierFilter = EScoreMultiplierFilter::ScoreBubblesOnly;
    this->NumMultiplierTiers = 5;
    this->MultiplierValue.AddDefaulted(5);
    this->MultiplierPointsRequired.AddDefaulted(5);
    this->MultiplierDuration.AddDefaulted(5);
    this->CreativeBurstDuration = 10.00f;
}


