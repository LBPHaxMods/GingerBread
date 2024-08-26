#include "ScoreAmountHUD.h"

UScoreAmountHUD::UScoreAmountHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentClass = NULL;
    this->ScoreAmountWidgets[0] = NULL;
    this->ScoreAmountWidgets[1] = NULL;
    this->ScoreAmountWidgets[2] = NULL;
    this->ScoreAmountWidgets[3] = NULL;
}

void UScoreAmountHUD::ShowScoresPermanently(bool permanent) {
}

bool UScoreAmountHUD::ShowCollectedBellsFromLevel(bool bForceHasJustPlayedLevel) {
    return false;
}

void UScoreAmountHUD::SetCollectabellAmounts() {
}

void UScoreAmountHUD::RefreshActivePlayers() {
}

void UScoreAmountHUD::OnJoinedPlayerCountChanged(int32 Count) {
}

void UScoreAmountHUD::OnInventoryItemChange(const FString& ItemName, int32 newQuantity, int32 oldQuantity, ASackboy* playerSackboy) {
}

void UScoreAmountHUD::CheckForSynchronisedOverheadActors() {
}

bool UScoreAmountHUD::AreAllOverheadScoresSynchronised() const {
    return false;
}


