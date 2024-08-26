#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EFlowDirection -FallbackName=EFlowDirection
#include "Blueprint/UserWidget.h"
#include "AppearanceSlot.h"
#include "EESportsTier.h"
#include "EPlayerSlot.h"
#include "GingerbreadPlayerId.h"
#include "LevelRewardInfo.h"
#include "LevelRewardRow.h"
#include "Templates/SubclassOf.h"
#include "UIFunctionLibrary.generated.h"

class AGingerbreadReplicatedHud;
class ASackboy;
class UDataTable;
class UESportsDataAsset;
class UGingerbreadHUDComponent;
class UGingerbreadLocalPlayer;
class UObject;
class UPrimitiveComponent;
class UTexture2D;
class UUserWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable)
class UUIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUIFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ShouldShowPS5UI(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ShouldShowDPXUI(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ResetLoadingScreenProgressData();
    
    UFUNCTION(BlueprintCallable)
    static void RefreshParentWidgetPath(UWidget* Widget, UUserWidget* ParentWidget);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector ProjectWorldTo3DHudActorSpace(const UObject* WorldContextObject, const FVector& WorldPosition, float HudActorRelativeDepth);
    
    UFUNCTION(BlueprintCallable)
    static void PauseAllWidgetAnimations(UUserWidget* UserWidget);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MarkInitialCutsceneAsSeen(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FText Key_GetLocalisedDisplayName(const FKey& Key, const FName& StringTableId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsCutscenePlaying(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EPlayerSlot GetUISlotFromPlayerID(const UObject* WorldContextObject, FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintPure)
    static int64 GetTotalGPUMem();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FAppearanceSlot GetSackboyAppearanceFromID(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FAppearanceSlot GetSackboyAppearance(const UObject* WorldContextObject, const ASackboy* Player);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetRewardInfoDisplayData(const UObject* WorldContextObject, const FLevelRewardInfo& RewardInfo, TSoftObjectPtr<UTexture2D>& Icon, FText& DisplayText);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGingerbreadReplicatedHud* GetReplicatedHud(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGingerbreadLocalPlayer* GetPrimaryGingerbreadLocalPlayer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetPlayerNameFromID(const UObject* WorldContextObject, FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlayerName(ASackboy* Player);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FGingerbreadPlayerId GetPlayerIDFromUISlot(const UObject* WorldContextObject, EPlayerSlot UISlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUserWidget* GetParentUserWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMicDevicesCount();
    
    UFUNCTION(BlueprintCallable)
    static FString GetMicDeviceName(int32 Index);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetLoadingScreenPercentage(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetLevelRewardTable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGingerbreadHUDComponent* GetHudComponentFromScreen(const UObject* WorldContextObject, const FName ScreenName, const TSubclassOf<UGingerbreadHUDComponent> HudComponentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGPUTime();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFractionMilliseconds(FTimespan Timespan);
    
    UFUNCTION(BlueprintCallable)
    static FText GetFormattedTimespanNoMilliseconds(FTimespan Timespan, int32 MinimumMinuteDigits);
    
    UFUNCTION(BlueprintCallable)
    static FText GetFormattedTimespanDays(FTimespan Timespan, int32 MinimumDays, int32 MinimumHours, int32 MinimumMinutes, int32 MinimunSeconds, bool bShowBiggestUnitOnly);
    
    UFUNCTION(BlueprintCallable)
    static void GetFormattedTimespan_SeperateMS(FTimespan Timespan, int32 MinimumMinuteDigits, FText& PreMSText, FText& MSText);
    
    UFUNCTION(BlueprintCallable)
    static FText GetFormattedTimespan(FTimespan Timespan, int32 MinimumMinuteDigits, int32 MinimumMSDigits);
    
    UFUNCTION(BlueprintCallable)
    static FText GetFormattedMilliseconds(int32 Milliseconds);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetESportsRankForTierLimit(EESportsTier tier, int32 AllPlayersCount);
    
    UFUNCTION(BlueprintCallable)
    static EESportsTier GetESportsPlayerTier(int32 PlayerRank, int32 AllPlayersCount);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetESportsLimitTierValue(EESportsTier tier);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetESportsIsTierReached(const UObject* WorldContextObject, EESportsTier tier);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UESportsDataAsset* GetESportsDataAssetInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetESportsCurrentPlayerTier(const UObject* WorldContextObject, EESportsTier& OutTier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetDefaultPlayerNameFromID(const UObject* WorldContextObject, FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FLevelRewardRow GetCurrentLevelRewardRow(const UObject* WorldContextObject, UDataTable* LevelRewardTable, bool& IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCPUTime();
    
    UFUNCTION(BlueprintPure)
    static int64 GetAllocatedGPUMem();
    
    UFUNCTION(BlueprintCallable)
    static void ForceRestartAnimation(UUserWidget* Target, UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CheckIsScreenTransitionActive(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyBase3DPrimitiveHudSettings(UPrimitiveComponent* PrimitiveComponent);
    
};

