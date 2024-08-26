#include "KingFroogleCommanderComponent.h"

UKingFroogleCommanderComponent::UKingFroogleCommanderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinimumSeparation = 10.00f;
    this->TimeBetweenFalls = 1.00f;
    this->MaximumTimeToWaitForFrooglesToDie = 5.00f;
    this->SeparationRadiusIncreasePerIteration.AddDefaulted(5);
    this->NumberOfAnglesToCheckPerIteration.AddDefaulted(5);
    this->NumberOfIterations = 5;
    this->DebugEnabled = false;
}

int32 UKingFroogleCommanderComponent::GetNumFrooglesNeeded() const {
    return 0;
}

int32 UKingFroogleCommanderComponent::GetMaxPossibleFroogles() {
    return 0;
}


