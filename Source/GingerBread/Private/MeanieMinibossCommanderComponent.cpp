#include "MeanieMinibossCommanderComponent.h"

UMeanieMinibossCommanderComponent::UMeanieMinibossCommanderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimeBetweenSpawns = 0.10f;
    this->MinRadiusFromCentreToAimGrunty = 15.00f;
    this->MaxRadiusFromCentreToAimGrunty = 35.00f;
    this->GruntyAimAngleArc = 0.00f;
    this->EmitGruntyVFXDelay = 0.10f;
    this->GruntyEmitVFX = NULL;
    this->GruntyEmitSFX = NULL;
}

int32 UMeanieMinibossCommanderComponent::GetNumOfGruntys(int32 wave, int32 numOfSackboys) {
    return 0;
}


