#include "PSCompeteLeaderboardBaseWidget.h"

UPSCompeteLeaderboardBaseWidget::UPSCompeteLeaderboardBaseWidget() {
    this->EntriesContainerVB = NULL;
    this->BoardSection = EESportsBoardSectionType::MyPosition;
    this->bIsLoading = true;
    this->OpeningAnimationTime = 1.00f;
    this->DelayIntroAnim = 1.00f;
    this->bCanPlayIntroAnim = true;
    this->bIsOffline = false;
    this->Sections.AddDefaulted(3);
}

void UPSCompeteLeaderboardBaseWidget::SetupLeaderboards(bool bForceReload) {
}

void UPSCompeteLeaderboardBaseWidget::SetLeaderboardOffline(bool IsOffline) {
}

void UPSCompeteLeaderboardBaseWidget::SetIsLoading(bool IsLoading) {
}

void UPSCompeteLeaderboardBaseWidget::SetBoardSection(EESportsBoardSectionType InSection) {
}

void UPSCompeteLeaderboardBaseWidget::PreviousSection() {
}

void UPSCompeteLeaderboardBaseWidget::PlayOpeningAnimation() {
}






void UPSCompeteLeaderboardBaseWidget::OnLeaderboardLoaded(const FTournamentLeaderboard& ResultBoard, bool bSuccess) {
}

void UPSCompeteLeaderboardBaseWidget::NextSection() {
}

FESportsLeaderboardSectionItem UPSCompeteLeaderboardBaseWidget::GetSectionItem(EESportsBoardSectionType InSection) const {
    return FESportsLeaderboardSectionItem{};
}


