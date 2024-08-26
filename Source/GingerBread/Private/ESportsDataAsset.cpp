#include "ESportsDataAsset.h"

UESportsDataAsset::UESportsDataAsset() {
    this->PrizesTable = NULL;
}

FText UESportsDataAsset::GetTournamentNameText(FName RowName, bool bIsUnlocked) const {
    return FText::GetEmpty();
}

FText UESportsDataAsset::GetTierTopOrBottomText(EESportsTier tier) const {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UESportsDataAsset::GetTierParticeIconTexture(EESportsTier tier) const {
    return NULL;
}

FText UESportsDataAsset::GetTierLimitText(EESportsTier tier) const {
    return FText::GetEmpty();
}

FText UESportsDataAsset::GetTierLabelText(EESportsTier tier) const {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UESportsDataAsset::GetTierIconTexture(EESportsTier tier) const {
    return NULL;
}

FText UESportsDataAsset::GetTierCombinedText(EESportsTier tier, bool bAddTierText, bool bAddTopBottom, bool bAddLimitValue) const {
    return FText::GetEmpty();
}

FSlateColor UESportsDataAsset::GetTierColor(EESportsTier tier) const {
    return FSlateColor{};
}

FESportsTierPrizeItem UESportsDataAsset::GetPrizeItem(FName RowName, EESportsTier tier) const {
    return FESportsTierPrizeItem{};
}

bool UESportsDataAsset::GetMaterialParamNameForPrizeTexture(FName TournamentID, EESportsTier tier, const UTexture2D* InTexture, FName& OutParamName) {
    return false;
}

FESportsTrialRow UESportsDataAsset::GetESportsTrialRow(FName RowName) const {
    return FESportsTrialRow{};
}


