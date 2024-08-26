#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "CombinedWorldStats.h"
#include "ELevelBadgeType.h"
#include "ELevelState.h"
#include "ELevelType.h"
#include "ETrophy.h"
#include "EZoneState.h"
#include "GingerbreadPlayerId.h"
#include "GlobalCompletionStats.h"
#include "PersistentLevelData2.h"
#include "WorldLevelRow.h"
#include "WorldMasterRow.h"
#include "WorldMapFunctionLibrary.generated.h"

class AActor;
class ACameraArea;
class ALevelBadge;
class ULevelCompletionSequence;
class ULevelUnlockCameraBehaviour;
class UObject;

UCLASS(Blueprintable)
class GINGERBREAD_API UWorldMapFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWorldMapFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool WasGeraldVisited(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const int32 GeraldID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ToggleUnlockCameraArea(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SyncHostReplicatedData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SyncDebugOrbCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FDataTableRowHandle ShouldTriggerAutomaticZoneUnlock(const UObject* WorldContextObject, const ALevelBadge* Level, bool& bShouldUnlockZone);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetZoneState(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const ELevelType WorldID, const int32 ZoneID, const EZoneState NewState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetWorldLocked(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const ELevelType WorldID, const bool bLocked);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTransitionCannonLocked(const UObject* WorldContextObject, const ELevelType WorldID, const bool bLocked);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSpaceTransitionCannonLocked(const UObject* WorldContextObject, const bool bLocked);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLevelState(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const ELevelType WorldID, const int32 LevelID, const ELevelState NewState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCollectedOrbCount(const UObject* WorldContextObject, int32 TargetOrbCount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RefreshNewWorldPrompts(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MarkToyUsed(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const int32 ToyID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MarkGeraldVisited(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const int32 GeraldID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsZoneUnlocked(const UObject* WorldContextObject, const ELevelType WorldID, const int32 ZoneID, const bool bVerifyWorldLockState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsWorldUnlockedByDefault(const UObject* WorldContextObject, const ELevelType WorldID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsWorldMap(const UObject* WorldContextObject, FName MapName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsValidWorldMapSpawnLocation(const UObject* WorldContextObject, const FVector& TargetLocation, TArray<AActor*>& IgnoredActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidPersistentLevelData(const FPersistentLevelData2& LevelSaveData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsTransitionCannonLocked(const UObject* WorldContextObject, const ELevelType WorldID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsSpaceTransitionCannonLocked(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsNewWorldPromptVisible(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsNewCostumesPromptVisible(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsNetworkHostSackboyOnScreen(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsNetworkHostKnittedKnightTrialsLocked(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsNetworkHostCostumeShopLocked(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInWorldMapPreviewArea(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsCostumeShopAvailable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsCameraTransitioningOrHostOffscreen(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsAnyUnseenVoidLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasNetworkHostCompletedLevels(const UObject* WorldContextObject, const ELevelBadgeType BadgeType, const ELevelType WorldID, const int32 ZoneID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasNetworkHostCompletedFirstRun(const UObject* WorldContextObject, const ELevelType WorldID, const int32 LevelID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasNetworkHostCompletedALevelLeadingToAnotherZone(const UObject* WorldContextObject, const ELevelBadgeType BadgeType, const ELevelType WorldID, const int32 ZoneID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HasCompletedAllLevelsForCrown(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FWorldMasterRow GetWorldStaticDataFromID(const UObject* WorldContextObject, ELevelType WorldID, bool& bFound);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FWorldMasterRow GetWorldStaticData(const UObject* WorldContextObject, const FString& PersistentMapName, bool& bFound);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ALevelBadge* GetUnlockSourceLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetUnlockCameraBehaviour(const UObject* WorldContextObject, ACameraArea*& TransitionCameraArea, ULevelUnlockCameraBehaviour*& TransitionBehaviour);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ACameraArea* GetUnlockCameraArea(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetToysCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetParentLevelBadges(const UObject* WorldContextObject, const ELevelType ChildWorldID, const int32 ChildLevelID, TArray<ALevelBadge*>& ParentLevelBadges);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumUnseenVoidLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumUnlockedVoidLevels(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetNetworkHostWorldVisitCount(const UObject* WorldContextObject, const ELevelType WorldID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ELevelType> GetNetworkHostUnlockedWorlds(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetNetworkHostTotalMemoryOrbsCollected(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TEnumAsByte<ETrophy::Type> GetNetworkHostAchievedLevelTier(const UObject* WorldContextObject, const ELevelType WorldID, const int32 LevelID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FGlobalCompletionStats GetNetworkGlobalCompletionStats(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FCombinedWorldStats GetNetworkCombinedStatsForWorld(const UObject* WorldContextObject, const ELevelType WorldID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetMaximumMemoryOrbCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ELevelType GetLocalHostLastVisitedWorld(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FWorldLevelRow GetLevelStaticDataFromID(const UObject* WorldContextObject, ELevelType WorldID, int32 LevelID, bool& bFound);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FWorldLevelRow GetLevelStaticData(const UObject* WorldContextObject, const FString& PersistentMapName, bool& bFound);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ELevelState GetLevelState(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const ELevelType WorldID, const int32 LevelID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetLevelIDs(const UObject* WorldContextObject, const FString& MapName, ELevelType& WorldID, int32& LevelID, bool& bFound);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelCompletionSequence* GetLevelCompletionSequence(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetGeraldsCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FWorldLevelRow GetGameLevelStaticData(const UObject* WorldContextObject, bool& bFound);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetGameLevelIDs(const UObject* WorldContextObject, ELevelType& WorldID, int32& LevelID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TEnumAsByte<ETrophy::Type> GetAchievedLevelTier(const UObject* WorldContextObject, const FPersistentLevelData2& LevelData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FPersistentLevelData2 FindPersistentLevelDataForPlayerID(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const ELevelType WorldID, const int32 LevelID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FPersistentLevelData2 FindNetworkHostPersistentLevelData(const UObject* WorldContextObject, const ELevelType WorldID, const int32 LevelID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CollectPrizeBubble(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const ELevelType WorldID, const int32 LevelID, const int32 PrizeID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AwardAllMemoryOrbs(const UObject* WorldContextObject);
    
};

