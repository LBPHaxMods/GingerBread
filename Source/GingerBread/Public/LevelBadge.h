#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "ECameraTransitionError.h"
#include "ELevelBadgeType.h"
#include "ELevelState.h"
#include "ELevelType.h"
#include "EMusicOverride.h"
#include "LevelCompletionResult.h"
#include "LockStateChangedEventDelegate.h"
#include "PersistentLevelData2.h"
#include "UnlockCompleteEventDelegate.h"
#include "UnlockTransition.h"
#include "WorldLevelRow.h"
#include "WorldMapLevelHandle.h"
#include "LevelBadge.generated.h"

class ACameraArea;
class ALevelBadge;
class ALevelBadgeModel;
class AOrbGate;
class AProceduralActor;
class ASackboy;
class AZone;
class UCameraBehaviour;
class UDataTable;
class ULevelDebugMenuComponent;
class ULevelUnlockCameraBehaviour;
class USkeletalMeshComponent;
class USpawnPointComponent;
class UStaticMeshComponent;
class UTexture;
class UWorldMapMiniSequence;

UCLASS(Blueprintable)
class GINGERBREAD_API ALevelBadge : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MusicOverride, meta=(AllowPrivateAccess=true))
    EMusicOverride MusicOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* VisibleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelBadgeModel* AssociatedModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpawnPointComponent* SpawnPointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle StaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MemoryOrbSeparationAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MemoryOrbDistanceFromCentreCm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MemoryOrbHeightOffsetCm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> MemoryOrbSlotHeightOffsetCm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraArea* UnlockCameraAreaA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraArea* UnlockCameraAreaB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlocksAVoidLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasJustCompletedThisLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasJustCompletedFirstRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasJustCollectedVoidEnergy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMastered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasJustMasteredThisLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSkippedUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasRevealAnimationPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelCompletionResult UnlockInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALevelBadge*> ParentLevelBadges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnlockTransition> Transitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AZone* OwningZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AssociatedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WorldMasterTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULevelDebugMenuComponent* LevelDebugMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULevelUnlockCameraBehaviour* TransitionBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraArea* TransitionCameraArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockCompleteEvent OnUnlockComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockStateChangedEvent OnLockStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSkipping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AProceduralActor* MostRecentlyRevealedRollPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BadgeRadiusCm;
    
    ALevelBadge(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    bool ValidateMultipleLevelReferences();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateMemoryOrbVisibilities(const bool bIsLevelVisible, const bool bForceCurrentHostData);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateAssociatedActorVisibility();
    
    UFUNCTION(BlueprintCallable)
    void SkipUnlock();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowAmbientVoidVFX(const bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowAmbientVoidVFX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPanBackToSource() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void RefreshRollPathVisibility();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshBadgeVisualState(bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    ECameraTransitionError PlayUnlockCameraTransition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPathUnroll();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTransitionToTargetFinished(UCameraBehaviour* Behaviour);
    
    UFUNCTION(BlueprintCallable)
    void OnTransitionToSourceFinished(UCameraBehaviour* Behaviour);
    
    UFUNCTION(BlueprintCallable)
    void OnSkipTransitionFinished(UCameraBehaviour* Behaviour);
    
    UFUNCTION(BlueprintCallable)
    void OnReturnTransitionFinished(UCameraBehaviour* Behaviour);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MusicOverride();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLevelThumbnailLoaded(UTexture* LevelThumbnail);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHostSaveDataReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterLevelBadge(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginTransitionToTarget();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetSetLevelTransform(const FTransform& NewTransform);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetRefreshRollPathVisibility(AProceduralActor* RollPath, bool bRollPathVisible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZoneLocked() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockedByDefault() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParentInUnlockList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInUnlockList() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasProcessedFirstUnlock(const ALevelBadge* LevelBadge) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasProcessedAllChildUnlocks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCompletedLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWorldMapLevelHandle GetWorldMapLevelHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    ALevelBadge* GetUnlockSourceLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELevelType GetUnlockedWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AZone* GetTheZoneImIn() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetStaticData(FWorldLevelRow& Row);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSharedParents(const ALevelBadge* LevelBadge, TArray<ALevelBadge*>& SharedParents) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AOrbGate* GetOrbGate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPersistentLevelData2 GetOldHostLevelData() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorldMapMiniSequence* GetNextMiniSequence() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetMemoryOrbSlots(TArray<UStaticMeshComponent*>& MemoryOrbSlots);
    
    UFUNCTION(BlueprintCallable)
    void GetMemoryOrbSlotLocations(TArray<FVector>& SlotLocations);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetMemoryOrbs(TArray<AActor*>& MemoryOrbs);
    
    UFUNCTION(BlueprintCallable)
    void GetMemoryOrbLocations(TArray<FVector>& MemoryOrbLocations);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMemoryOrbCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELevelState GetLevelState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELevelBadgeType GetLevelBadgeType() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLastVisitedTarget() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPersistentLevelData2 GetCurrentHostLevelData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPersistentLevelData2 GetConstHostLevelDataBefore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPersistentLevelData2 GetConstHostLevelDataAfter() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBurnVFXOffset(FVector& VFXLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AProceduralActor*> FindRollPaths(const ALevelBadge* SourceLevel) const;
    
    UFUNCTION(BlueprintCallable)
    void EndAnimatedBadgeReveal();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableCameraFocus(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUnlockLevels() const;
    
    UFUNCTION(BlueprintCallable)
    void CacheValuesFromSaveData();
    
private:
    UFUNCTION(BlueprintCallable)
    void BeginTransitionToTarget();
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginEnterLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginAnimatedBadgeReveal();
    
    UFUNCTION(BlueprintCallable)
    ELevelType AttemptWorldUnlock();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AppendErrorMessage(const FString& Message);
    
};

