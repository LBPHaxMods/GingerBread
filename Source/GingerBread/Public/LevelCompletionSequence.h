#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EMiniSequenceFlow.h"
#include "ESequenceState.h"
#include "PersistentLevelData2.h"
#include "WorldLevelRow.h"
#include "WorldMapLevelHandle.h"
#include "LevelCompletionSequence.generated.h"

class AActor;
class ACameraArea;
class ALevelBadge;
class AWorldMapGameMode;
class AWorldMapGameState;
class UGingerBreadGameInstance;
class UKnittedKnightTrialsUnlockSequence;
class UPodUnlockSequence;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULevelCompletionSequence : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldMapLevelHandle CurrentLevelHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldMapLevelHandle SpawnLevelHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSpawnedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Pod1stLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Pod2ndLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSackboysAreInteractingWithLevelBadge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGingerBreadGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWorldMapGameMode* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWorldMapGameState* WorldMapGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraArea* CurrentTransitionCameraArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraArea* TransitionCameraAreaA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraArea* TransitionCameraAreaB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipAllUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAttemptedBonusUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressChanceBonusLevelUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OrbGateUnlockMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle FirstVoidEnergyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TrialsTriggerLevel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESequenceState SequenceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMiniSequenceFlow MiniSequenceContext;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastVisitedTarget;
    
public:
    ULevelCompletionSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPlayTrialUnlock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPlayPodCutscene() const;
    
    UFUNCTION(BlueprintCallable)
    void SetLastVisitedTarget(AActor* VisitedActor);
    
    UFUNCTION(BlueprintCallable)
    void ResetLevelUnlock();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterPreviewZone_BP();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterPreviewZone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginSequence_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginLevelUnlock_BP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingLevelUnlocks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALevelBadge* GetUnlockedLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKnittedKnightTrialsUnlockSequence* GetTrialsUnlockSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ALevelBadge* GetSourceLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALevelBadge* GetNextUnlockedLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPersistentLevelData2 GetHostLevelDataBefore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPersistentLevelData2 GetHostLevelDataAfter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPodUnlockSequence* GetBossPodUnlockSequence() const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateLevelUnlockList();
    
    UFUNCTION(BlueprintCallable)
    void EraseLocalHostSnapshot(const FWorldMapLevelHandle& LevelHandle);
    
    UFUNCTION(BlueprintCallable)
    void EndSequence();
    
    UFUNCTION(BlueprintCallable)
    void EndLevelUnlock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUnlockFirstLevel() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CacheUnlockedLevelHandle();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWorldLevelRow BP_GetUnlockedLevelStaticData() const;
    
    UFUNCTION(BlueprintCallable)
    void BeginSequence();
    
    UFUNCTION(BlueprintCallable)
    void BeginLevelUnlock();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginDeferredUnlockSequence();
    
};

