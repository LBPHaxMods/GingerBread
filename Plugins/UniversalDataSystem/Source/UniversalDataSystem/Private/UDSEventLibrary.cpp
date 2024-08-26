#include "UDSEventLibrary.h"

UUDSEventLibrary::UUDSEventLibrary() {
}

bool UUDSEventLibrary::PostUpdateTrophyProgress(APlayerController* PlayerController, int32 TrophyId, int32 TrophyProgress) {
    return false;
}

bool UUDSEventLibrary::PostUnlockTrophy(APlayerController* PlayerController, int32 TrophyId) {
    return false;
}

bool UUDSEventLibrary::PostEventActivityTerminate(APlayerController* PlayerController) {
    return false;
}

bool UUDSEventLibrary::PostEventActivityStart(APlayerController* PlayerController, bool UseZoneId, const FString& ZoneID, const FString& ActivityID, bool UseMapPosition, TArray<float> MapPosition, bool UsePrimaryActor, const FString& PrimaryActor, bool UseSecondaryActors, TArray<FString> SecondaryActors, bool UseEquippedMechanics, TArray<FString> EquippedMechanics, bool UseDifficultySetting, int32 DifficultySetting) {
    return false;
}

bool UUDSEventLibrary::PostEventActivityResume(APlayerController* PlayerController, const FString& ActivityID, bool UseCompletedActivities, TArray<FString> CompletedActivities, bool UseInProgressActivities, TArray<FString> InProgressActivities) {
    return false;
}

bool UUDSEventLibrary::PostEventActivityPriorityChange(APlayerController* PlayerController, const TMap<FString, int32>& PriorityMap) {
    return false;
}

bool UUDSEventLibrary::PostEventActivityEnd(APlayerController* PlayerController, bool UseZoneId, const FString& ZoneID, bool UseOutcome, const FString& Outcome, const FString& ActivityID, bool UseMapPosition, TArray<float> MapPosition, bool UseScore, int32 score, bool UseDifficultySetting, int32 DifficultySetting) {
    return false;
}

bool UUDSEventLibrary::PostEventActivityAvailabilityChange(APlayerController* PlayerController, const FString& Mode, bool UseAvailableActivities, TArray<FString> AvailableActivities, bool UseUnavailableActivities, TArray<FString> UnavailableActivities) {
    return false;
}

bool UUDSEventLibrary::CanPostUDSEvents() {
    return false;
}


