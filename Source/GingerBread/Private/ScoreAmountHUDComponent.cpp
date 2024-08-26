#include "ScoreAmountHUDComponent.h"

UScoreAmountHUDComponent::UScoreAmountHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScoreAnimTime = NULL;
    this->ScoreSizeCurve = NULL;
    this->ScoreCooldownCurve = NULL;
    this->UpdateAmountTime = 1.00f;
    this->BagOpenCoolDownTime = 0.50f;
    this->ShowOffTime = 0.00f;
    this->mp3DWalletActor = NULL;
    this->mp3DOverheadActor = NULL;
}

void UScoreAmountHUDComponent::UnregisterOverheadSequenceActor(AScoreHudOverheadActorBase* OverheadSequenceActor) {
}


void UScoreAmountHUDComponent::ShowPermanent(bool ShowPermanently) {
}



void UScoreAmountHUDComponent::SetScore(int32 newAmount, int32 oldAmount, EUIScoreShowType DisplayType) {
}

void UScoreAmountHUDComponent::SetPlayerSlot(EPlayerSlot PlayerSlot) {
}


void UScoreAmountHUDComponent::ResetCollectionState() {
}

void UScoreAmountHUDComponent::RegisterOverheadSequenceActor(AScoreHudOverheadActorBase* OverheadSequenceActor) {
}







void UScoreAmountHUDComponent::OnBagShown() {
}

void UScoreAmountHUDComponent::OnBagOpen() {
}

bool UScoreAmountHUDComponent::IsBagOpen() const {
    return false;
}

void UScoreAmountHUDComponent::Initialise3DActors_Implementation(AActor* wallet, AActor* OverHead) {
}


EPlayerSlot UScoreAmountHUDComponent::GetTargetPlayerSlot() const {
    return EPlayerSlot::PLAYER_SLOT_1;
}

AActor* UScoreAmountHUDComponent::Get3DWalletActor() {
    return NULL;
}

AActor* UScoreAmountHUDComponent::Get3DOverheadActor() {
    return NULL;
}




bool UScoreAmountHUDComponent::AreOverheadSequenceActorSynchronised() const {
    return false;
}


