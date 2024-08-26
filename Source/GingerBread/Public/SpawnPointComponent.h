#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CameraPointOfInterest.h"
#include "EControlMode.h"
#include "ESackboyQuery.h"
#include "ESpawnPointLifetimeState.h"
#include "ESpawnPointType.h"
#include "RegistrationComponent.h"
#include "SpawnPointEventDelegate.h"
#include "SpawnPointLifetimeStateChangeEventDelegate.h"
#include "SpawnPointPostSpawnEventDelegate.h"
#include "SpawnPointResetLevelEventDelegate.h"
#include "SpawnPointSackboyEventDelegate.h"
#include "SpawnPointComponent.generated.h"

class AActor;
class ASackboy;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpawnPointComponent : public URegistrationComponent, public ICameraPointOfInterest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsSpawningEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool AUTH_AllowTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlySpawnWhenVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlySpawnWhenAliveSackboyIsInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysFadeToBlackDuringRespawnSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysCameraPanDuringRespawnSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableObstructionTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableSpawnPreventionTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableCameraFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreFocusTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnCameraFocusDuration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnPointLifetimeState LifetimeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RespawnAllSackboysWhenDisablingForLastStand;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPointEvent OnPrepareToInstantSpawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPointSackboyEvent OnActivateSpawnPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPointEvent OnDeactivateSpawnPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPointEvent OnSpawnSequenceInitiated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPointEvent OnPreSpawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPointPostSpawnEvent OnPostSpawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPointResetLevelEvent OnResettingLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPointLifetimeStateChangeEvent OnLifetimeStateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowGivingGloop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControlMode EquipControlMode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnPointType SpawnPointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnSlotLockoutDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator DetectionRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDetectionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDetectionHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDetectionHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SpawnDetectionRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnPreventionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnPreventionExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DetectInAirSackboys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDuration;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEditable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpawnPoint[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MidPoint[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LandingPoint[4];
    
    USpawnPointComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerSpawnPoint(ASackboy* spawningSackboy, ASackboy* activatorSackboy);
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnPlayers(const ESackboyQuery SackboyType);
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraFocus();
    
    UFUNCTION(BlueprintCallable)
    void OnRegistrarAvailable(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraManagerAvailable(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable)
    void NotifyLevelSetupDone();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetSpawnSackboys(const ESackboyQuery SackboyType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetSpawnRotation(int32 spawn_slot) const;
    
    UFUNCTION(BlueprintCallable)
    static FName GetSpawnPointTypeTag(const ESpawnPointType spawn_point_type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSpawnLocation(int32 spawn_slot) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableSpawning();
    
    UFUNCTION(BlueprintCallable)
    void EnableInstantRespawnSequence(bool bSnapCamera);
    
    UFUNCTION(BlueprintCallable)
    void DisableSpawning();
    

    // Fix for true pure virtual functions not being implemented
};

