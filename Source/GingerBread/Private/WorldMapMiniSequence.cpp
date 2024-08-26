#include "WorldMapMiniSequence.h"

UWorldMapMiniSequence::UWorldMapMiniSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTerminatesUnlockSequence = true;
    this->bCachedOuterTickState = false;
    this->GameMode = NULL;
    this->WorldMapGameState = NULL;
    this->CurrentState = EMiniSequenceState::Disabled;
    this->TransitionBehaviour = NULL;
    this->TransitionCameraArea = NULL;
}

void UWorldMapMiniSequence::PanCameraToTarget(AActor* TargetActor, const FNoParamScriptDelegate& Delegate) {
}

bool UWorldMapMiniSequence::IsUnplayed() const {
    return false;
}

bool UWorldMapMiniSequence::IsPlaying() const {
    return false;
}

bool UWorldMapMiniSequence::IsDisabled() const {
    return false;
}

bool UWorldMapMiniSequence::IsComplete() const {
    return false;
}

void UWorldMapMiniSequence::HandleCameraPanComplete() {
}

void UWorldMapMiniSequence::EnableTransitionCameraArea(const bool bEnabled) {
}

void UWorldMapMiniSequence::CompleteSequence() {
}

void UWorldMapMiniSequence::ClearTransitionCallbacks() {
}

bool UWorldMapMiniSequence::CanBegin() const {
    return false;
}





void UWorldMapMiniSequence::BeginSequence() {
}


