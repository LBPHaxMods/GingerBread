#include "PSCompeteScreenBase.h"

UPSCompeteScreenBase::UPSCompeteScreenBase() {
    this->ActiveTournamentCanvas = NULL;
    this->InActiveTournamentCanvas = NULL;
    this->PlaystationCompeteLeaderboardWidget = NULL;
    this->TournamentTrialDetails = NULL;
    this->bUnlockedState = true;
    this->bCanPlayTierTilesAnimations = true;
    this->LoadStatus = ECompeteScreenLoadStatus::None;
    this->CurrentTier = EESportsTier::Bronze;
    this->CurrentSetupPhase = ECompeteScreenSetupPhase::None;
}

void UPSCompeteScreenBase::SetUnlockedState(bool bUnlocked) {
}

void UPSCompeteScreenBase::SetRemainingTime() {
}

void UPSCompeteScreenBase::SetLoadStatus(ECompeteScreenLoadStatus Status) {
}

void UPSCompeteScreenBase::OnTopRankedLoaded(const FTournamentLeaderboard& ResultBoard, bool bSuccess) {
}

void UPSCompeteScreenBase::OnSilverRankLoaded(const FTournamentLeaderboard& ResultBoard, bool bSuccess) {
}










void UPSCompeteScreenBase::OnPrimaryPlayerRankLoaded(const FTournamentLeaderboard& ResultBoard, bool bSuccess) {
}

void UPSCompeteScreenBase::OnPlatinumRankLoaded(const FTournamentLeaderboard& ResultBoard, bool bSuccess) {
}

void UPSCompeteScreenBase::OnGoldRankLoaded(const FTournamentLeaderboard& ResultBoard, bool bSuccess) {
}

void UPSCompeteScreenBase::OnDiamondRankLoaded(const FTournamentLeaderboard& ResultBoard, bool bSuccess) {
}

UPSCompeteTierBaseWidget* UPSCompeteScreenBase::GetTierWidget(EESportsTier tier) const {
    return NULL;
}


