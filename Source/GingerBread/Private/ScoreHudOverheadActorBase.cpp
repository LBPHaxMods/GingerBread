#include "ScoreHudOverheadActorBase.h"

AScoreHudOverheadActorBase::AScoreHudOverheadActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollectabellWorth = 0;
    this->SubtractWorthInTotal = true;
    this->RequestingBagToBeOpen = false;
    this->WaitingForSynchronisation = false;
}

void AScoreHudOverheadActorBase::UpdateSequence_Implementation(float DeltaTime, EUIScoreAnimState BagState) {
}

void AScoreHudOverheadActorBase::UpdateSackboyPosition() {
}

void AScoreHudOverheadActorBase::UnregisterSelfFromHudComponent() {
}

void AScoreHudOverheadActorBase::SynchroniseWithOtherOverheadScores() {
}

void AScoreHudOverheadActorBase::SetWantsBagOpen(bool WantsBagOpen) {
}

void AScoreHudOverheadActorBase::SetupForSequence_Implementation(int32 NewCollectabellWorth) {
}

void AScoreHudOverheadActorBase::SetAssignedSackboy(ASackboy* SackboyToFollow) {
}

void AScoreHudOverheadActorBase::OnSynchronisedWithOtherOverheadScores_Implementation() {
}


bool AScoreHudOverheadActorBase::IsWaitingForSynchronisation() const {
    return false;
}

bool AScoreHudOverheadActorBase::IsTargetBagOpen() const {
    return false;
}

bool AScoreHudOverheadActorBase::GetWantsBagOpen() const {
    return false;
}

bool AScoreHudOverheadActorBase::GetSubtractWorthInTotal() const {
    return false;
}

FVector AScoreHudOverheadActorBase::GetProjectedSackboyScreenPosition() const {
    return FVector{};
}

USceneComponent* AScoreHudOverheadActorBase::GetComponentToMove() const {
    return NULL;
}

int32 AScoreHudOverheadActorBase::GetCollectabellWorth() const {
    return 0;
}

void AScoreHudOverheadActorBase::CancelCollection_Implementation() {
}

void AScoreHudOverheadActorBase::AssignHudComponent(UScoreAmountHUDComponent* HUDComponent) {
}



