#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GingerbreadGameState.h"
#include "WorldLevelRow.h"
#include "WorldMapGameState.generated.h"

class ALevelBadge;
class AOrbGate;
class APodLandingPlatform;
class ATransitionCannon;
class AWorldMapPod;
class AZone;
class UGingerBreadGameInstance;
class ULevelCompletionSequence;
class UWorldMapMiniSequence;

UCLASS(Blueprintable)
class GINGERBREAD_API AWorldMapGameState : public AGingerbreadGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWorldMapMiniSequence*> MiniSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALevelBadge*> LevelBadges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AZone*> Zones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOrbGate*> OrbGates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATransitionCannon*> Cannons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APodLandingPlatform*> PodLandingPlatforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULevelCompletionSequence* LevelCompletionSequence;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerBreadGameInstance* GameInstance;
    
public:
    AWorldMapGameState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LockLevels(int32 ZoneID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZoneLocked(const int32 ZoneID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelUnlocked(const int32 LevelID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelLocked(const int32 LevelID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStaticDataFromID(int32 LevelID, FWorldLevelRow& StaticData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWorldMapPod* GetPodActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALevelBadge* GetGameLevelBadge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBadgeFromRow(const FDataTableRowHandle& Row, ALevelBadge*& LevelBadge, FWorldLevelRow& LevelData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALevelBadge* GetBadgeByID(int32 LevelID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLevelLaunch(const int32 LevelID) const;
    
};

