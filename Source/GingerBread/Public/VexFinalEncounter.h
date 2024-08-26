#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "CameraPointOfInterest.h"
#include "EPlayerJoinDirection.h"
#include "ESackboySpawnType.h"
#include "EVexFinalFightActiveState.h"
#include "EVexFinalFightType.h"
#include "EVexFinalVoiceLineTriggerResult.h"
#include "EVexFinalVoiceLineTriggerType.h"
#include "GingerbreadPlayerId.h"
#include "HitPointsComponentEventReceiver.h"
#include "Templates/SubclassOf.h"
#include "VexFinalEncounterSimpleDelegateDelegate.h"
#include "VexFinalEncounterSplatAttackDelegateDelegate.h"
#include "VexFinalFight2ArenaDistanceServerState.h"
#include "VexFinalNewStageDelegateDelegate.h"
#include "VexFinalRevealVanishServerState.h"
#include "VexFinalStunStateUpdateDelegateDelegate.h"
#include "VexFinalVoiceLineEndedDelegateDelegate.h"
#include "VexFinalVoiceLineStartedDelegateDelegate.h"
#include "VexFinalEncounter.generated.h"

class ACreatinatorTurretBase;
class AMoverTool2;
class ASackboy;
class AVexFinalDartAttackController;
class AVexFinalDuopedeAttackController;
class AVexFinalFistManager;
class AVexFinalFloorHatchController;
class AVexFinalItemAttackManager;
class AVexFinalMeshActor;
class AVexFinalSplatAttack;
class AVexFinalTileManager;
class AVexFinalTricksterAttack;
class AVexFinalVoiceLineManager;
class AVexableDuopedeSegment;
class UAkComponent;
class UCSPHelperComponent;
class UCapsuleComponent;
class UCurveFloat;
class UGameplayTagComponent;
class UHitPointsComponent;
class UInteractionComponent;
class UParticleSystemComponent;
class UPrimitiveComponent;
class USceneComponent;
class USpawnPointComponent;
class USphereComponent;
class USplineComponent;
class USplineFollowerComponent;
class UStaticMeshComponent;
class UThrowTargetComponent;
class UVexFinalAttackLoopComponent;
class UVexFinalAttackSystem;

UCLASS(Blueprintable)
class AVexFinalEncounter : public AActor, public IHitPointsComponentEventReceiver, public ICameraPointOfInterest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* AppearSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsComponent* HitPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkVex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MeshReferenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* HeadPrimitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* CapsuleInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UThrowTargetComponent* ThrowTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* StunVFXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RightShoulder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LeftShoulder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* ProximitySphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineFollowerComponent* SplineFollower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCSPHelperComponent* RevealVanishCSPHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCSPHelperComponent* Fight2DistanceCSPHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVexFinalAttackLoopComponent* AttackLoopComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVexFinalMeshActor* MeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> VexTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVexFinalFistManager* FistManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVexFinalItemAttackManager* ItemAttackManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVexFinalSplatAttack*> SplatAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVexFinalTricksterAttack* TricksterAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVexFinalDuopedeAttackController* DuopedeController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVexFinalDartAttackController* DartAttackController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVexFinalFloorHatchController* FloorHatchController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVexFinalTileManager* TileManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AVexFinalVoiceLineManager> VoiceLineManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMoverTool2*> HatchMoverTools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMoverTool2*> HatchCollisionMoverTools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVexFinalFightType FightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BossHealthPerNumberOfPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> HealthPercentageStageThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VanishRevealCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RevealDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RevealPartWayEffectsTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VanishDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Fight2MinArenaOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Fight2MaxArenaOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Fight2MovingCloseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Fight2MovingAwayDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Fight2DistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVexFinalAttackLoopComponent> AttackLoopClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunnedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreTricksterAttackVOTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloorBreakTotalAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloorBreakDestructionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloorBreakVOTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostFloorBreakShuffleDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallBreakTotalAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallBreakDestructionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallBreakVOTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilationScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxConsecutiveHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxConsecutiveHitsStunned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSimpleDelegate OnVexFightStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSimpleDelegate OnVexDefeated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSimpleDelegate OnVexFinalDefeated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSimpleDelegate OnVexDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSimpleDelegate OnVexHitByBomb;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalStunStateUpdateDelegate OnVexStunUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalNewStageDelegate OnNewStage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSimpleDelegate OnVexVanish;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSimpleDelegate OnVexVanishFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSimpleDelegate OnVexReveal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSimpleDelegate OnVexRevealFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalVoiceLineStartedDelegate OnVexVoiceLinePlayed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalVoiceLineEndedDelegate OnVexVoiceLineFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSimpleDelegate OnVexFistAttackStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSimpleDelegate OnVexItemAttackStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSplatAttackDelegate OnVexSlapAttackStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSimpleDelegate OnVexTricksterAttackStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSimpleDelegate OnVexTransformationAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSimpleDelegate OnVexDuopedeTransformationAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSimpleDelegate OnVexBombSpamAttackStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSimpleDelegate OnVexFloorBreakStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSimpleDelegate OnVexFloorBreakDestruction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSimpleDelegate OnVexWallBreakStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalEncounterSimpleDelegate OnVexWallBreakDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsDoingOutOfStunSplatAttack;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVexFinalAttackSystem* AttackSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FightActiveState, meta=(AllowPrivateAccess=true))
    EVexFinalFightActiveState FightActiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthBarActive, meta=(AllowPrivateAccess=true))
    bool HealthBarActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthBarRatio, meta=(AllowPrivateAccess=true))
    float HealthBarRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentLocation, meta=(AllowPrivateAccess=true))
    int32 CurrentLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Stunned, meta=(AllowPrivateAccess=true))
    bool IsStunned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayingStunEffect, meta=(AllowPrivateAccess=true))
    bool PlayingStunEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CapsuleCollisionEnabled, meta=(AllowPrivateAccess=true))
    bool CapsuleCollisionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVexFinalRevealVanishServerState Server_RevealVanishState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVexFinalFight2ArenaDistanceServerState Server_Fight2ArenaDistanceState;
    
public:
    AVexFinalEncounter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHealthBar(float HealthRatio);
    
    UFUNCTION(BlueprintCallable)
    EVexFinalVoiceLineTriggerResult TriggerVoiceLine(EVexFinalVoiceLineTriggerType TriggerType, bool Force100PercentChance);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerVexVanishStartedEffects();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerVexTransformedActorKilledEffects(const FVector& DeathLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerVexRevealStartedEffects(bool EmphasisReveal);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerVexRevealPartWayEffects();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerVexFightStartedEffects();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerVexDefeatedEffects();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerVexDamageEffects(const FVector& DamageLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerStunEffects();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerStopStunEffects();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerHatchOpenEffects(AMoverTool2* HatchMoverTool);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerHatchCloseEffects(AMoverTool2* HatchMoverTool);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerFight2FlyEffects();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerFight2BreakTileEffects();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerFight2BreakSideWallStartedEffects();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerFight2BreakSideWallEffects();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerFight2BreakBackWallEffects();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopStunEffects();
    
    UFUNCTION(BlueprintCallable)
    void StartFight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHealthBarEnabled(bool Enabled, float HealthRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHatchOpen(AMoverTool2* HatchMoverTool, bool Open);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetHatchMoverTool(AMoverTool2* HatchMoverTool);
    
    UFUNCTION(BlueprintCallable)
    void PreStartFight();
    
    UFUNCTION(BlueprintCallable)
    void PreStart_Fight1VexReveal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayVexVanishStartedEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayVexTransformedActorKilledEffects(const FVector& DeathLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayVexRevealStartedEffects(bool EmphasisReveal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayVexRevealPartWayEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayVexFightStartedEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayVexDefeatedEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayVexDamageEffects(const FVector& DamageLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayStunEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayHatchOpenEffects(AMoverTool2* HatchMoverTool);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayHatchCloseEffects(AMoverTool2* HatchMoverTool);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFight2FlyEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFight2BreakTileEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFight2BreakSideWallStartedEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFight2BreakSideWallEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFight2BreakBackWallEffects();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnVoiceLineEnded(EVexFinalVoiceLineTriggerType TriggerType, bool WasInterrupted, bool FullBodyAnim);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboySpawned(ASackboy* Sackboy, TEnumAsByte<ESackboySpawnType> SpawnType, USpawnPointComponent* SpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyDied(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Stunned();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayingStunEffect();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthBarRatio();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthBarActive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FightActiveState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CapsuleCollisionEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& PlayerId, bool IsForcedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnOutOfLives();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlapProximitySphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapProximitySphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMoverTool2* GetCurrentHatchMoverTool() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void Fight2_OnWallsDestroyed();
    
    UFUNCTION(BlueprintCallable)
    void Fight2_OnWallBreakStarted();
    
    UFUNCTION(BlueprintCallable)
    void Fight2_OnTilesDestroyed();
    
public:
    UFUNCTION(BlueprintCallable)
    void Fight2_OnFly();
    
    UFUNCTION(BlueprintCallable)
    void Fight2_OnBackWallDestroyed();
    
private:
    UFUNCTION(BlueprintCallable)
    void EnterStun_TurretKilled(ACreatinatorTurretBase* Turret);
    
    UFUNCTION(BlueprintCallable)
    void EnterStun_DuopedeKilled(AVexableDuopedeSegment* DuopedeSegment);
    

    // Fix for true pure virtual functions not being implemented
};

