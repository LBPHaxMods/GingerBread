#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EMamapedeActivity.h"
#include "EMamapedeControllerState.h"
#include "EMamapedeFightPhase.h"
#include "RageRumbleMamapedeDelegateDelegate.h"
#include "SimpleMamapedeDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "MamapedeController.generated.h"

class ABossArenaBoundsVolume;
class ACameraArea;
class ACheckpointOnString;
class AMamapede;
class AMamapedeCameraTarget;
class UMamapedeShockwaveManagerComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class AMamapedeController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMamapedeShockwaveManagerComponent* MamapedeShockwaveManager;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleMamapedeDelegate OnMamapedePhaseDefeated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleMamapedeDelegate OnMamapedeDefeated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRageRumbleMamapedeDelegate OnTriggerRageRumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FloorCloseStartPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FloorFarEndPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FloorLeftStartPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FloorRightEndPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FloorSplitCollision1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FloorSplitCollision2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABossArenaBoundsVolume* ArenaBoundsVolume_WholeArena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABossArenaBoundsVolume* ArenaBoundsVolume_Vines_VerticallyCracked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABossArenaBoundsVolume* ArenaBoundsVolume_Vines_CrossCracked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABossArenaBoundsVolume* ArenaBoundsVolume_AwayFromCracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABossArenaBoundsVolume* ArenaBoundsVolume_AwayFromCracksUpper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ArenaCentreActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LeftSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RightSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* WallJumpStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraArea* CamAreaWowMoment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraArea* CamAreaWallCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorWithSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RageWavePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> BurrowPatrolPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMamapedeCameraTarget* CameraTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACheckpointOnString* Checkpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ProceduralActorClassesUsingWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMamapede> MamapedeClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FightStarted, meta=(AllowPrivateAccess=true))
    bool FightStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMamapedeControllerState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthUIEnabled, meta=(AllowPrivateAccess=true))
    bool HealthUIEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthUIFill, meta=(AllowPrivateAccess=true))
    float HealthUIFill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Mamapede, meta=(AllowPrivateAccess=true))
    AMamapede* Mamapede;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PhasesDefeated, meta=(AllowPrivateAccess=true))
    int32 Server_PhasesDefeated;
    
public:
    AMamapedeController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void WallChargeTransitionComplete(EMamapedeActivity ActivityFinished);
    
    UFUNCTION(BlueprintCallable)
    void WallChargeComplete(EMamapedeActivity ActivityFinished);
    
    UFUNCTION(BlueprintCallable)
    void VerticalJumpTransitionComplete(EMamapedeActivity ActivityFinished);
    
    UFUNCTION(BlueprintCallable)
    void VerticalJumpComplete(EMamapedeActivity ActivityFinished);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHealthUI(float TotalHealthInterval);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerRageRumble(EMamapedeFightPhase FightPhase);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerMamapedeDefeated();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerBlackBars();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartFight();
    
private:
    UFUNCTION(BlueprintCallable)
    void SpawnShockwave();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupHealthUI();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetTimeDilation(float TimeDilation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHealthUIEnabled_Blueprint(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBossOnCheckpoint(AMamapede* Boss);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EMamapedeControllerState SelectNextBehaviour_BP(EMamapedeControllerState CurrentBehaviour, EMamapedeFightPhase FightPhase, bool JustPassedPhaseThreshold, bool HasMoreWallChargesToDo);
    
private:
    UFUNCTION(BlueprintCallable)
    void RageComplete(EMamapedeActivity ActivityFinished);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PhasesDefeated();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Mamapede();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthUIFill();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthUIEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FightStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnRageCentreStartMovement();
    
    UFUNCTION(BlueprintCallable)
    void MamapedePhaseDefeated();
    
    UFUNCTION(BlueprintCallable)
    void MamapedeDamaged(float PhaseHealthInterval);
    
    UFUNCTION(BlueprintCallable)
    void GroundDiveTransitionComplete(EMamapedeActivity ActivityFinished);
    
    UFUNCTION(BlueprintCallable)
    void GroundDiveComplete(EMamapedeActivity ActivityFinished);
    
    UFUNCTION(BlueprintCallable)
    void FollowSplineTransitionComplete(EMamapedeActivity ActivityFinished);
    
    UFUNCTION(BlueprintCallable)
    void FollowSplineComplete(EMamapedeActivity ActivityFinished);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableBlackBars();
    
public:
    UFUNCTION(BlueprintCallable)
    void Debug_SkipPhase();
    
private:
    UFUNCTION(BlueprintCallable)
    void ChaseComplete(EMamapedeActivity ActivityFinished);
    
};

