#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UDSEventLibrary.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class UUDSEventLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUDSEventLibrary();

    UFUNCTION(BlueprintCallable)
    static bool PostUpdateTrophyProgress(APlayerController* PlayerController, int32 TrophyId, int32 TrophyProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool PostUnlockTrophy(APlayerController* PlayerController, int32 TrophyId);
    
    UFUNCTION(BlueprintCallable)
    static bool PostEventActivityTerminate(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static bool PostEventActivityStart(APlayerController* PlayerController, bool UseZoneId, const FString& ZoneID, const FString& ActivityID, bool UseMapPosition, TArray<float> MapPosition, bool UsePrimaryActor, const FString& PrimaryActor, bool UseSecondaryActors, TArray<FString> SecondaryActors, bool UseEquippedMechanics, TArray<FString> EquippedMechanics, bool UseDifficultySetting, int32 DifficultySetting);
    
    UFUNCTION(BlueprintCallable)
    static bool PostEventActivityResume(APlayerController* PlayerController, const FString& ActivityID, bool UseCompletedActivities, TArray<FString> CompletedActivities, bool UseInProgressActivities, TArray<FString> InProgressActivities);
    
    UFUNCTION(BlueprintCallable)
    static bool PostEventActivityPriorityChange(APlayerController* PlayerController, const TMap<FString, int32>& PriorityMap);
    
    UFUNCTION(BlueprintCallable)
    static bool PostEventActivityEnd(APlayerController* PlayerController, bool UseZoneId, const FString& ZoneID, bool UseOutcome, const FString& Outcome, const FString& ActivityID, bool UseMapPosition, TArray<float> MapPosition, bool UseScore, int32 score, bool UseDifficultySetting, int32 DifficultySetting);
    
    UFUNCTION(BlueprintCallable)
    static bool PostEventActivityAvailabilityChange(APlayerController* PlayerController, const FString& Mode, bool UseAvailableActivities, TArray<FString> AvailableActivities, bool UseUnavailableActivities, TArray<FString> UnavailableActivities);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanPostUDSEvents();
    
};

