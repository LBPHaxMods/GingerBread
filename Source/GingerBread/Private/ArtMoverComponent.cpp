#include "ArtMoverComponent.h"

UArtMoverComponent::UArtMoverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoPlay = true;
    this->AutoDisableCollision = true;
    this->EnableMusic = false;
    this->TimeInBeats = true;
    this->AutoChangeMusicSections = false;
    this->ClipJumpOnBeat = false;
    this->ClipJumpBeatCycleLength = 4;
    this->ClipJumpBeatCycleStart = 0;
    this->AdvanceOnBeat = false;
    this->BeatAdvanceDuration = 0.50f;
    this->BeatAdvanceDelay = 0.00f;
    this->BeatCycleLength = 0;
    this->BeatCycleStartIndex = 0;
    this->BeatAdvanceLerpMode = EMusicArtMoverLerpMode::Linear;
    this->IsWorldSpace = true;
    this->EnableRotation = true;
    this->EnableScale = true;
    this->RandomInitialPosition = false;
    this->RandomInitialPositionGap = 0.00f;
    this->RandomSpeedMul = false;
    this->RandomSpeedMulMin = 0.50f;
    this->RandomSpeedMulMax = 1.50f;
    this->MoveParent = false;
}

void UArtMoverComponent::StopMoveTarget(int32 TargetIndex) {
}

void UArtMoverComponent::Stop() {
}

void UArtMoverComponent::StartingPositions() {
}

void UArtMoverComponent::SetStartSequence(const FName& SequenceName) {
}

bool UArtMoverComponent::SetSequenceClip(const FName& SequenceName, const int32 Index, const FArtMoveClip& Clip) {
    return false;
}

void UArtMoverComponent::SetMoveTargetClipTime(int32 MoveTargetIndex, float CurrentTime, float StartTime, bool MoveToPosition) {
}

void UArtMoverComponent::SetMoveTargetClip(int32 MoveTargetIndex, FName SequenceName, int32 ClipIndex, float Time, bool NewPlay, bool MoveToPosition) {
}

void UArtMoverComponent::SetCurrentSequence(const FName& SequenceName, bool PlayFromStart) {
}

void UArtMoverComponent::RefreshCache_Slow() {
}

void UArtMoverComponent::PlayMoveTarget(int32 TargetIndex) {
}

void UArtMoverComponent::PlayClip(FName SequenceName, int32 ClipIndex, float FromTime, bool SetToRemainingTime) {
}

void UArtMoverComponent::Play() {
}

void UArtMoverComponent::OnMusicEvent(TEnumAsByte<MusicEventType> MusicEvent, float BarDuration, float BeatDuration, FName CueName, int32 CurrentBar, int32 CurrentBeat, int32 BeatsPerBar, int32 SectionBeatCount, int32 TotalBeatCount) {
}

bool UArtMoverComponent::GetSequenceClip(const FName& SequenceName, const int32 Index, FArtMoveClip& ClipCopy) const {
    return false;
}

int32 UArtMoverComponent::GetNumMoveTargets() const {
    return 0;
}

float UArtMoverComponent::GetMoveTargetTime(int32 MoveTargetIndex, bool UnitTime, bool LerpedUnitTime) const {
    return 0.0f;
}

int32 UArtMoverComponent::FindMoveTargetIndex(USceneComponent* MoveThis) const {
    return 0;
}

int32 UArtMoverComponent::AddMoveTarget(USceneComponent* MoveThis) {
    return 0;
}

bool UArtMoverComponent::AddMove(FName MoveName, FTransform From, FTransform To, USceneComponent* Spline) {
    return false;
}

int32 UArtMoverComponent::AddClipToSequence(const FName& SequenceName, const FArtMoveClip& Clip) {
    return 0;
}


