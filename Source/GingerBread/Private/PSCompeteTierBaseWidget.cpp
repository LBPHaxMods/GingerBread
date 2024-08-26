#include "PSCompeteTierBaseWidget.h"

UPSCompeteTierBaseWidget::UPSCompeteTierBaseWidget() {
    this->TournamentID = TEXT("CHALLENGE_TOURNAMENT_1");
    this->tier = EESportsTier::Bronze;
    this->bIsCurrentTier = false;
    this->RequiredTimeForTier = FText::FromString(TEXT("--:--:--"));
    this->bIsLoading = false;
    this->bCanPlaySetupAnimation = true;
}




EESportsTier UPSCompeteTierBaseWidget::GetTier() const {
    return EESportsTier::Bronze;
}

FText UPSCompeteTierBaseWidget::GetRequiredTimeForTier() const {
    return FText::GetEmpty();
}


