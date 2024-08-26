#include "LevelBadge.h"
#include "Net/UnrealNetwork.h"

ALevelBadge::ALevelBadge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MusicOverride = EMusicOverride::Ignore;
    this->VisibleMesh = NULL;
    this->AssociatedModel = NULL;
    this->SpawnPointComponent = NULL;
    this->MemoryOrbSeparationAngleDegrees = 45.00f;
    this->MemoryOrbDistanceFromCentreCm = 20.00f;
    this->MemoryOrbHeightOffsetCm = 3.00f;
    this->UnlockCameraAreaA = NULL;
    this->UnlockCameraAreaB = NULL;
    this->bUnlocksAVoidLevel = false;
    this->bHasJustCompletedThisLevel = false;
    this->bHasJustCompletedFirstRun = false;
    this->bHasBeenPlayed = false;
    this->bHasJustCollectedVoidEnergy = false;
    this->bIsMastered = false;
    this->bHasJustMasteredThisLevel = false;
    this->bHasSkippedUnlock = false;
    this->bHasRevealAnimationPlayed = false;
    this->OwningZone = NULL;
    this->WorldMasterTable = NULL;
    this->LevelDebugMenu = NULL;
    this->TransitionBehaviour = NULL;
    this->TransitionCameraArea = NULL;
    this->bIsSkipping = false;
    this->MostRecentlyRevealedRollPath = NULL;
    this->BadgeRadiusCm = 0.00f;
}

bool ALevelBadge::ValidateMultipleLevelReferences() {
    return false;
}

void ALevelBadge::UpdateMemoryOrbVisibilities(const bool bIsLevelVisible, const bool bForceCurrentHostData) {
}

void ALevelBadge::UpdateAssociatedActorVisibility() {
}

void ALevelBadge::SkipUnlock() {
}


bool ALevelBadge::ShouldShowAmbientVoidVFX() const {
    return false;
}

bool ALevelBadge::ShouldPanBackToSource() const {
    return false;
}

void ALevelBadge::RefreshRollPathVisibility() {
}


ECameraTransitionError ALevelBadge::PlayUnlockCameraTransition() {
    return ECameraTransitionError::None;
}


void ALevelBadge::OnTransitionToTargetFinished(UCameraBehaviour* Behaviour) {
}

void ALevelBadge::OnTransitionToSourceFinished(UCameraBehaviour* Behaviour) {
}

void ALevelBadge::OnSkipTransitionFinished(UCameraBehaviour* Behaviour) {
}

void ALevelBadge::OnReturnTransitionFinished(UCameraBehaviour* Behaviour) {
}

void ALevelBadge::OnRep_MusicOverride() {
}





void ALevelBadge::NetSetLevelTransform_Implementation(const FTransform& NewTransform) {
}

void ALevelBadge::NetRefreshRollPathVisibility_Implementation(AProceduralActor* RollPath, bool bRollPathVisible) {
}

bool ALevelBadge::IsZoneLocked() const {
    return false;
}

bool ALevelBadge::IsUnlockedByDefault() const {
    return false;
}

bool ALevelBadge::IsParentInUnlockList() const {
    return false;
}

bool ALevelBadge::IsInUnlockList() const {
    return false;
}

bool ALevelBadge::HasProcessedFirstUnlock(const ALevelBadge* LevelBadge) const {
    return false;
}

bool ALevelBadge::HasProcessedAllChildUnlocks() const {
    return false;
}

bool ALevelBadge::HasCompletedLevel() const {
    return false;
}

FWorldMapLevelHandle ALevelBadge::GetWorldMapLevelHandle() const {
    return FWorldMapLevelHandle{};
}


ELevelType ALevelBadge::GetUnlockedWorld() const {
    return ELevelType::Himalaya;
}

AZone* ALevelBadge::GetTheZoneImIn() const {
    return NULL;
}

bool ALevelBadge::GetStaticData(FWorldLevelRow& Row) {
    return false;
}

void ALevelBadge::GetSharedParents(const ALevelBadge* LevelBadge, TArray<ALevelBadge*>& SharedParents) const {
}

AOrbGate* ALevelBadge::GetOrbGate() const {
    return NULL;
}

FPersistentLevelData2 ALevelBadge::GetOldHostLevelData() const {
    return FPersistentLevelData2{};
}

UWorldMapMiniSequence* ALevelBadge::GetNextMiniSequence() const {
    return NULL;
}


void ALevelBadge::GetMemoryOrbSlotLocations(TArray<FVector>& SlotLocations) {
}


void ALevelBadge::GetMemoryOrbLocations(TArray<FVector>& MemoryOrbLocations) {
}

int32 ALevelBadge::GetMemoryOrbCount() const {
    return 0;
}

ELevelState ALevelBadge::GetLevelState() const {
    return ELevelState::Locked;
}

ELevelBadgeType ALevelBadge::GetLevelBadgeType() const {
    return ELevelBadgeType::Main;
}

AActor* ALevelBadge::GetLastVisitedTarget() const {
    return NULL;
}

FPersistentLevelData2 ALevelBadge::GetCurrentHostLevelData() const {
    return FPersistentLevelData2{};
}

FPersistentLevelData2 ALevelBadge::GetConstHostLevelDataBefore() const {
    return FPersistentLevelData2{};
}

FPersistentLevelData2 ALevelBadge::GetConstHostLevelDataAfter() const {
    return FPersistentLevelData2{};
}

void ALevelBadge::GetBurnVFXOffset(FVector& VFXLocation) const {
}

TArray<AProceduralActor*> ALevelBadge::FindRollPaths(const ALevelBadge* SourceLevel) const {
    return TArray<AProceduralActor*>();
}

void ALevelBadge::EndAnimatedBadgeReveal() {
}

void ALevelBadge::EnableCameraFocus(bool bEnabled) {
}

bool ALevelBadge::CanUnlockLevels() const {
    return false;
}

void ALevelBadge::CacheValuesFromSaveData() {
}

void ALevelBadge::BeginTransitionToTarget() {
}

void ALevelBadge::BeginEnterLevel() {
}


ELevelType ALevelBadge::AttemptWorldUnlock() {
    return ELevelType::Himalaya;
}


void ALevelBadge::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALevelBadge, MusicOverride);
}


