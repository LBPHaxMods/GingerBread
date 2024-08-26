#include "LevelCompletionSequence.h"

ULevelCompletionSequence::ULevelCompletionSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasSpawnedPlayers = false;
    this->Pod1stLanding = NULL;
    this->Pod2ndLanding = NULL;
    this->bSackboysAreInteractingWithLevelBadge = false;
    this->GameInstance = NULL;
    this->GameMode = NULL;
    this->WorldMapGameState = NULL;
    this->CurrentTransitionCameraArea = NULL;
    this->TransitionCameraAreaA = NULL;
    this->TransitionCameraAreaB = NULL;
    this->bSkipAllUnlocks = false;
    this->bHasAttemptedBonusUnlock = false;
    this->bSuppressChanceBonusLevelUnlock = false;
    this->OrbGateUnlockMode = false;
    this->SequenceState = ESequenceState::Idle;
    this->bCanSkip = false;
    this->MiniSequenceContext = EMiniSequenceFlow::Invalid;
    this->LastVisitedTarget = NULL;
}

bool ULevelCompletionSequence::ShouldPlayTrialUnlock() const {
    return false;
}

bool ULevelCompletionSequence::ShouldPlayPodCutscene() const {
    return false;
}

void ULevelCompletionSequence::SetLastVisitedTarget(AActor* VisitedActor) {
}

void ULevelCompletionSequence::ResetLevelUnlock() {
}


void ULevelCompletionSequence::OnEnterPreviewZone() {
}



bool ULevelCompletionSequence::HasPendingLevelUnlocks() const {
    return false;
}

ALevelBadge* ULevelCompletionSequence::GetUnlockedLevel() const {
    return NULL;
}

UKnittedKnightTrialsUnlockSequence* ULevelCompletionSequence::GetTrialsUnlockSequence() const {
    return NULL;
}


ALevelBadge* ULevelCompletionSequence::GetNextUnlockedLevel() const {
    return NULL;
}

FPersistentLevelData2 ULevelCompletionSequence::GetHostLevelDataBefore() const {
    return FPersistentLevelData2{};
}

FPersistentLevelData2 ULevelCompletionSequence::GetHostLevelDataAfter() const {
    return FPersistentLevelData2{};
}

UPodUnlockSequence* ULevelCompletionSequence::GetBossPodUnlockSequence() const {
    return NULL;
}

void ULevelCompletionSequence::GenerateLevelUnlockList() {
}

void ULevelCompletionSequence::EraseLocalHostSnapshot(const FWorldMapLevelHandle& LevelHandle) {
}

void ULevelCompletionSequence::EndSequence() {
}

void ULevelCompletionSequence::EndLevelUnlock() {
}

bool ULevelCompletionSequence::CanUnlockFirstLevel() const {
    return false;
}

void ULevelCompletionSequence::CacheUnlockedLevelHandle() {
}

FWorldLevelRow ULevelCompletionSequence::BP_GetUnlockedLevelStaticData() const {
    return FWorldLevelRow{};
}

void ULevelCompletionSequence::BeginSequence() {
}

void ULevelCompletionSequence::BeginLevelUnlock() {
}



