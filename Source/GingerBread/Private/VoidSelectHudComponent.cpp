#include "VoidSelectHudComponent.h"

UVoidSelectHudComponent::UVoidSelectHudComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsUnlocking = false;
    this->ScarletVOTable = NULL;
}


void UVoidSelectHudComponent::SetSelectedTrialsType(EVoidSelectTrialsType TrialsType) {
}

void UVoidSelectHudComponent::SetSeenIntro() {
}

void UVoidSelectHudComponent::SetSeenCompletedGolds() {
}

void UVoidSelectHudComponent::SetActiveScreenType(EVoidSelectScreenType InActiveScreen) {
}


void UVoidSelectHudComponent::RegisterLevelUnlock(const FVoidSelectUnlockDataLevel& UnlockData) {
}

void UVoidSelectHudComponent::RegisterCostumeUnlock(const FVoidSelectUnlockDataCostume& UnlockData) {
}

bool UVoidSelectHudComponent::ProcessUnlocks() {
    return false;
}



void UVoidSelectHudComponent::OnUnlockNotificationClosed(int32 OptionType) {
}

void UVoidSelectHudComponent::OnTournamentStatusChanged(FName TournamentID, ETournamentStatus NewStatus) {
}



void UVoidSelectHudComponent::OnEsportsBlockNotificationClosed(int32 OptionType) {
}

void UVoidSelectHudComponent::OnEsportsBlockAcceptTermsNotificationClosed(int32 OptionType) {
}




bool UVoidSelectHudComponent::IsUnlockNotificationOpen() const {
    return false;
}

bool UVoidSelectHudComponent::IsScreenTypeActive(EVoidSelectScreenType ScreenType) const {
    return false;
}

EVoidSelectTrialsType UVoidSelectHudComponent::GetSelectedTrialsType() const {
    return EVoidSelectTrialsType::Default;
}

bool UVoidSelectHudComponent::GetSeenIntro() const {
    return false;
}

bool UVoidSelectHudComponent::GetSeenCompletedGolds() const {
    return false;
}

int32 UVoidSelectHudComponent::GetScarletVOTypeLineCount(EVoidSelectVOType VOType) const {
    return 0;
}

TArray<UAnimSequenceBase*> UVoidSelectHudComponent::GetScarletVOTypeAnims(EVoidSelectVOType VOType) const {
    return TArray<UAnimSequenceBase*>();
}

int32 UVoidSelectHudComponent::GetScarletRandomVOTypeLine(EVoidSelectVOType VOType) const {
    return 0;
}

bool UVoidSelectHudComponent::GetPreviousLevelPlayedResults(ELevelType& WorldID, int32& LevelID, int32& TimesPlayed, TEnumAsByte<ETrophy::Type>& TierGained) {
    return false;
}

int64 UVoidSelectHudComponent::GetLastOpenedTimeDifference() const {
    return 0;
}

EVoidSelectESportState UVoidSelectHudComponent::GetESportState() const {
    return EVoidSelectESportState::None;
}

void UVoidSelectHudComponent::CancelUnlockNotification() {
}

bool UVoidSelectHudComponent::BlockEsportsNotification() {
    return false;
}

bool UVoidSelectHudComponent::BlockEsportsEntryNoOnline() {
    return false;
}

bool UVoidSelectHudComponent::BlockEsportsAcceptTermsNotification() {
    return false;
}

bool UVoidSelectHudComponent::AreAnyUnlocksPending() {
    return false;
}


