#include "UIFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UUIFunctionLibrary::UUIFunctionLibrary() {
}

bool UUIFunctionLibrary::ShouldShowPS5UI(const UObject* WorldContextObject) {
    return false;
}

bool UUIFunctionLibrary::ShouldShowDPXUI(const UObject* WorldContextObject) {
    return false;
}

void UUIFunctionLibrary::ResetLoadingScreenProgressData() {
}

void UUIFunctionLibrary::RefreshParentWidgetPath(UWidget* Widget, UUserWidget* ParentWidget) {
}

FVector UUIFunctionLibrary::ProjectWorldTo3DHudActorSpace(const UObject* WorldContextObject, const FVector& WorldPosition, float HudActorRelativeDepth) {
    return FVector{};
}

void UUIFunctionLibrary::PauseAllWidgetAnimations(UUserWidget* UserWidget) {
}

void UUIFunctionLibrary::MarkInitialCutsceneAsSeen(const UObject* WorldContextObject) {
}

FText UUIFunctionLibrary::Key_GetLocalisedDisplayName(const FKey& Key, const FName& StringTableId) {
    return FText::GetEmpty();
}

bool UUIFunctionLibrary::IsShippingBuild() {
    return false;
}

bool UUIFunctionLibrary::IsCutscenePlaying(const UObject* WorldContextObject) {
    return false;
}

EPlayerSlot UUIFunctionLibrary::GetUISlotFromPlayerID(const UObject* WorldContextObject, FGingerbreadPlayerId PlayerId) {
    return EPlayerSlot::PLAYER_SLOT_1;
}

int64 UUIFunctionLibrary::GetTotalGPUMem() {
    return 0;
}

FAppearanceSlot UUIFunctionLibrary::GetSackboyAppearanceFromID(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId) {
    return FAppearanceSlot{};
}

FAppearanceSlot UUIFunctionLibrary::GetSackboyAppearance(const UObject* WorldContextObject, const ASackboy* Player) {
    return FAppearanceSlot{};
}

void UUIFunctionLibrary::GetRewardInfoDisplayData(const UObject* WorldContextObject, const FLevelRewardInfo& RewardInfo, TSoftObjectPtr<UTexture2D>& Icon, FText& DisplayText) {
}

AGingerbreadReplicatedHud* UUIFunctionLibrary::GetReplicatedHud(const UObject* WorldContextObject) {
    return NULL;
}

UGingerbreadLocalPlayer* UUIFunctionLibrary::GetPrimaryGingerbreadLocalPlayer(const UObject* WorldContextObject) {
    return NULL;
}

FString UUIFunctionLibrary::GetPlayerNameFromID(const UObject* WorldContextObject, FGingerbreadPlayerId PlayerId) {
    return TEXT("");
}

FString UUIFunctionLibrary::GetPlayerName(ASackboy* Player) {
    return TEXT("");
}

FGingerbreadPlayerId UUIFunctionLibrary::GetPlayerIDFromUISlot(const UObject* WorldContextObject, EPlayerSlot UISlot) {
    return FGingerbreadPlayerId{};
}

UUserWidget* UUIFunctionLibrary::GetParentUserWidget(UWidget* Widget) {
    return NULL;
}

int32 UUIFunctionLibrary::GetMicDevicesCount() {
    return 0;
}

FString UUIFunctionLibrary::GetMicDeviceName(int32 Index) {
    return TEXT("");
}

float UUIFunctionLibrary::GetLoadingScreenPercentage(const UObject* WorldContextObject) {
    return 0.0f;
}

UDataTable* UUIFunctionLibrary::GetLevelRewardTable(const UObject* WorldContextObject) {
    return NULL;
}

UGingerbreadHUDComponent* UUIFunctionLibrary::GetHudComponentFromScreen(const UObject* WorldContextObject, const FName ScreenName, const TSubclassOf<UGingerbreadHUDComponent> HudComponentClass) {
    return NULL;
}

float UUIFunctionLibrary::GetGPUTime() {
    return 0.0f;
}

int32 UUIFunctionLibrary::GetFractionMilliseconds(FTimespan Timespan) {
    return 0;
}

FText UUIFunctionLibrary::GetFormattedTimespanNoMilliseconds(FTimespan Timespan, int32 MinimumMinuteDigits) {
    return FText::GetEmpty();
}

FText UUIFunctionLibrary::GetFormattedTimespanDays(FTimespan Timespan, int32 MinimumDays, int32 MinimumHours, int32 MinimumMinutes, int32 MinimunSeconds, bool bShowBiggestUnitOnly) {
    return FText::GetEmpty();
}

void UUIFunctionLibrary::GetFormattedTimespan_SeperateMS(FTimespan Timespan, int32 MinimumMinuteDigits, FText& PreMSText, FText& MSText) {
}

FText UUIFunctionLibrary::GetFormattedTimespan(FTimespan Timespan, int32 MinimumMinuteDigits, int32 MinimumMSDigits) {
    return FText::GetEmpty();
}

FText UUIFunctionLibrary::GetFormattedMilliseconds(int32 Milliseconds) {
    return FText::GetEmpty();
}

int32 UUIFunctionLibrary::GetESportsRankForTierLimit(EESportsTier tier, int32 AllPlayersCount) {
    return 0;
}

EESportsTier UUIFunctionLibrary::GetESportsPlayerTier(int32 PlayerRank, int32 AllPlayersCount) {
    return EESportsTier::Bronze;
}

int32 UUIFunctionLibrary::GetESportsLimitTierValue(EESportsTier tier) {
    return 0;
}

bool UUIFunctionLibrary::GetESportsIsTierReached(const UObject* WorldContextObject, EESportsTier tier) {
    return false;
}

UESportsDataAsset* UUIFunctionLibrary::GetESportsDataAssetInstance(const UObject* WorldContextObject) {
    return NULL;
}

bool UUIFunctionLibrary::GetESportsCurrentPlayerTier(const UObject* WorldContextObject, EESportsTier& OutTier) {
    return false;
}

FString UUIFunctionLibrary::GetDefaultPlayerNameFromID(const UObject* WorldContextObject, FGingerbreadPlayerId PlayerId) {
    return TEXT("");
}

FLevelRewardRow UUIFunctionLibrary::GetCurrentLevelRewardRow(const UObject* WorldContextObject, UDataTable* LevelRewardTable, bool& IsValid) {
    return FLevelRewardRow{};
}

float UUIFunctionLibrary::GetCPUTime() {
    return 0.0f;
}

int64 UUIFunctionLibrary::GetAllocatedGPUMem() {
    return 0;
}

void UUIFunctionLibrary::ForceRestartAnimation(UUserWidget* Target, UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed) {
}

bool UUIFunctionLibrary::CheckIsScreenTransitionActive(const UObject* WorldContextObject) {
    return false;
}

void UUIFunctionLibrary::ApplyBase3DPrimitiveHudSettings(UPrimitiveComponent* PrimitiveComponent) {
}


