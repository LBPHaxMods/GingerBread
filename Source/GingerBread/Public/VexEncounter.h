#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EPlayerJoinDirection.h"
#include "ESackboySpawnType.h"
#include "EVexEncounterBehaviour.h"
#include "EVexEncounterMusicState.h"
#include "EVexEncounterPhase.h"
#include "EVexEncounterVersion.h"
#include "GingerbreadPlayerId.h"
#include "OnBossBegunDelegate.h"
#include "OnDefeatedDelegate.h"
#include "OnRageOverDelegate.h"
#include "OnRageStartedDelegate.h"
#include "OnTimeDilationStartedDelegate.h"
#include "Templates/SubclassOf.h"
#include "VexEncounterThrowTargetInfo.h"
#include "VexFightEndedOutOfLivesDelegate.h"
#include "VexRageSequence.h"
#include "VexThrowDoubleProjectile.h"
#include "VexEncounter.generated.h"

class ABossArenaBoundsVolume;
class ASackboy;
class ATriggerBox;
class AVexConveyorController;
class AVexMovementController;
class AVexProjectile;
class AVexStuntBomb;
class AVexVortex;
class UAkAudioEvent;
class UAkComponent;
class UBoxComponent;
class UCSPHelperComponent;
class UCameraShake;
class UInteractionComponent;
class UParticleSystem;
class UParticleSystemComponent;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USpawnPointComponent;
class UStaticMeshComponent;
class UThrowTargetComponent;
class UVexActionComponent;
class UVexAnimInstance;
class UVexConveyorHeightsBehaviour;
class UVexFlameSequenceBehaviour;
class UVexHitReactionSoundCollection;
class UVexIdleMovingBehaviour;
class UVexJumpBehaviour;
class UVexPhaseTransitionBehaviour;
class UVexRageBehaviour;
class UVexSpikeyRollerSequenceBehaviour;
class UVexThrowBombBehaviour;
class UVexThrowHandBehaviour;
class UVexThrowSpikeyRollerBehaviour;
class UVexVortexBehaviour;

UCLASS(Blueprintable)
class AVexEncounter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* FullOverlapCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* FullInteractCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Visuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Vex_worldboss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RightThrowPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LeftThrowPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* LeftBellFireFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* RightBellFireFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PushPulseLeftHandFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PushPulseRightHandFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BackOverlapCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* HeadOverlapCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* UpperOverlapCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* BackInteractCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* HeadInteractCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* UpperInteractCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UThrowTargetComponent* ThrowTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVexActionComponent* VexActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCSPHelperComponent* CSPHelperComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVexAnimInstance> AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVexEncounterVersion EncounterVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVexMovementController* MovementController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVexConveyorController* ConveyorController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABossArenaBoundsVolume*> ArenaBoundsForHandsNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATriggerBox*> BoxesToThrowAtLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATriggerBox*> BoxesToThrowAtRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpikeyRollerPoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATriggerBox*> TargetBoxesForVortex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VortexSpawnPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BeginOnBeginPlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRageStarted RageStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRageOver RageOver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBossBegun BossBegun;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeDilationStarted TimeDilationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDefeated Defeated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFightEndedOutOfLives FightEndedOutOfLives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BossMaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BossCurrentHealth, meta=(AllowPrivateAccess=true))
    int32 BossCurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BossHealthPhaseChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BombDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> MPDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VexRageStartSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VexSpinBackwardsSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VexSpinForwardsSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VexArmMoveSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VexThrowBombsSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VexConjureBombsSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VexConjureRollerSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVexHitReactionSoundCollection> HitReactionCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> MoveSpeedPerPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> NormalConveyorSpeedPerPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RageConveyorSpeedPerPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexRageSequence RageSequencePhase1To2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexRageSequence RageSequencePhase2To3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TimeBetweenMiddleSpawnsPerPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MinThrowsBSR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MaxThrowsBSR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> CanSecondaryProjectiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVexThrowDoubleProjectile> ThrowDoubleProjectiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> MultiplayerAdjustProjectiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialIdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TBPPerPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> MpMultiplierTimeBetweenObjectsPerPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> BombTargetXVelocityPerPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseSpikeyRollers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Proj1Possibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystem> ThrowBombParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVexProjectile> ThrowBombProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystem> ThrowHandParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVexProjectile> ThrowRightHandProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVexProjectile> ThrowLeftHandProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystem> ThrowSpikeyRollerParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVexProjectile> ThrowSpikeyRollerProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystem> TakeDamageVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystem> DeathVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVexVortex> VortexClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVexStuntBomb> StuntBombClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool Rep_PhaseTransitionTriggered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsFightStarted, meta=(AllowPrivateAccess=true))
    bool IsFightStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentPhase, meta=(AllowPrivateAccess=true))
    EVexEncounterPhase CurrentPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> HitReactionCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthBarEnabled, meta=(AllowPrivateAccess=true))
    bool HealthBarEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ThrowTargetInfo, meta=(AllowPrivateAccess=true))
    FVexEncounterThrowTargetInfo ThrowTargetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsRaging, meta=(AllowPrivateAccess=true))
    bool IsRaging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FireBellsActive, meta=(AllowPrivateAccess=true))
    bool FireBellsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PulseHandsActive, meta=(AllowPrivateAccess=true))
    bool PulseHandsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MusicState, meta=(AllowPrivateAccess=true))
    EVexEncounterMusicState MusicState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVexIdleMovingBehaviour* Behaviour_IdleMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVexVortexBehaviour* Behaviour_Vortex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVexRageBehaviour* Behaviour_Rage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVexConveyorHeightsBehaviour* Behaviour_ConveyorHeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVexPhaseTransitionBehaviour* Behaviour_PhaseTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVexJumpBehaviour* Behaviour_Jump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVexThrowBombBehaviour* Behaviour_ThrowBomb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVexThrowHandBehaviour* Behaviour_ConjureHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVexThrowSpikeyRollerBehaviour* Behaviour_SpikeyRoller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVexFlameSequenceBehaviour* Behaviour_FlameSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVexSpikeyRollerSequenceBehaviour* Behaviour_SpikeyRollerSequence;
    
public:
    AVexEncounter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRageState(bool RageState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMusicState(EVexEncounterMusicState NewMusicState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHealthBar();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerIntro();
    
private:
    UFUNCTION(BlueprintCallable)
    void TakeDamageHit(const FVector& HitLocation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupHealthBar();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSpawnedActor(AActor* SpawnedActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayProjectilveVFX(UParticleSystem* VFX, UStaticMeshComponent* AttachMesh);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayDeathVFX(FVector SpawnLocation);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayDamageEffects(FVector HitLocation, float NewHealth, bool IsIdleMoving);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayAudio(UAkAudioEvent* AudioEvent);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTimeDilationStarted();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSackboySpawned(ASackboy* Sackboy, TEnumAsByte<ESackboySpawnType> SpawnType, USpawnPointComponent* SpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyDied(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ThrowTargetInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PulseHandsActive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MusicState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsRaging();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsFightStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthBarEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FireBellsActive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentPhase();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BossCurrentHealth();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& PlayerId, bool IsForcedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnOutOfLives();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFullColliderEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnFullColliderEndInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnColliderOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnColliderInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void IntroFinished_Delayed0();
    
    UFUNCTION(BlueprintCallable)
    void IntroFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPhaseIndex() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ConveyorSpeedUpdated(float NewSpeed);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ChangeBehaviour(EVexEncounterBehaviour NewState);
    
};

