#include "RhythmicMaterialCoordinatorComponent.h"

URhythmicMaterialCoordinatorComponent::URhythmicMaterialCoordinatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DataAsset = NULL;
    this->MaterialParameterCollection = NULL;
}

void URhythmicMaterialCoordinatorComponent::OnNewBeat(ARhythmManager* pRhythmManager, FName CueName, int32 CurrentBeat, int32 BeatsPerBar, int32 TotalBeatCount, float BeatDuration) {
}

void URhythmicMaterialCoordinatorComponent::OnMusicStateChanged(ARhythmManager* pRhythmManager, const FMusicStateTableRow NewMusicState, const FMusicStateTableRow PreviousMusicState) {
}


