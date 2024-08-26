#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "VexFinalFloorHatchControllerSimpleEventDelegate.h"
#include "VexFinalFloorHatchControllerTurretEventDelegate.h"
#include "VexFinalFloorHatchController.generated.h"

class ACreatinatorTurretBase;
class AVexBomb;
class AVexFinalFloorHatch;
class UCSPHelperComponent;
class UCurveFloat;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class AVexFinalFloorHatchController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCSPHelperComponent* CSPHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AVexFinalFloorHatch*> Hatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurretOpenHatchesDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurretLiftDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurretDropDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurretCloseHatchesDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurretPreDestroyDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACreatinatorTurretBase> StandardTurretClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACreatinatorTurretBase> VexedTurretClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurretHeightOffsetFromPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurretShootStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurretShootProjectileDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVexBomb> BombClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BombLiftDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BombLiftHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BombLiftCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BombArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BombMinAimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BombMaxAimOffset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalFloorHatchControllerSimpleEvent OnVexTurretAttackComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalFloorHatchControllerSimpleEvent OnVexBombAttackComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalFloorHatchControllerTurretEvent OnVexedTurretDestroyed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AVexBomb*> Bombs;
    
public:
    AVexFinalFloorHatchController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerTurretLiftStartedEffects(AVexFinalFloorHatch* Hatch, bool IsTurretVexed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerTurretDropStartedEffects(AVexFinalFloorHatch* Hatch, bool IsTurretVexed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerBombLaunchEffects(FVector launchLocation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTurretLiftStarted(AVexFinalFloorHatch* Hatch, bool IsTurretVexed);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTurretHatDestroyed(ACreatinatorTurretBase* Turret);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTurretDropStarted(AVexFinalFloorHatch* Hatch, bool IsTurretVexed);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTurretDestroyed(ACreatinatorTurretBase* Turret);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBombLaunched(const FVector& launchLocation);
    
    UFUNCTION(BlueprintCallable)
    void ActivateTurrets();
    
    UFUNCTION(BlueprintCallable)
    void ActivateBombs(int32 NumberOfBombWaves);
    
    UFUNCTION(BlueprintCallable)
    void AbortTurrets();
    
};

