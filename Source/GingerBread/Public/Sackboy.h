#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Pawn.h"
#include "Engine/NetSerialization.h"
#include "BoundEmoteData.h"
#include "CameraPointOfInterest.h"
#include "Carryable.h"
#include "ECarryDropReason.h"
#include "EControlMode.h"
#include "ESackboyActivity.h"
#include "ESackboyCoopMove.h"
#include "ESackboyDeathReason.h"
#include "ESackboyEmotionSystem.h"
#include "ESackboyEmotionalState.h"
#include "ESackboyLaunchKillVelocity.h"
#include "ESackboyLaunchType.h"
#include "ESackboyLaunchVectorType.h"
#include "ESackboyStruggleReleaseType.h"
#include "FlaglineUsable.h"
#include "FloatStateProperties.h"
#include "GrabInfo.h"
#include "GrabReleaseInfo.h"
#include "HitPointModifyResult.h"
#include "HitPointModifyResult_Network.h"
#include "HitPointsComponentEventReceiver.h"
#include "Network_GrappleTargetInfo.h"
#include "Network_SackboyAuthNetStatusFrame.h"
#include "Network_SackboyAuthNetStatusFrame_NoRightStick.h"
#include "Network_UserInputFrame.h"
#include "Network_UserInputFrame_NoRightStick.h"
#include "RollHoleInfo.h"
#include "SackboyAnimSequenceRequest.h"
#include "SackboyDeathSettings.h"
#include "SackboyEnterBubbleInfo.h"
#include "SackboyEventDelegate.h"
#include "SackboyExitBubbleInfo.h"
#include "SackboySpawnedEventDelegate.h"
#include "SetEnabledInteractionData.h"
#include "SetEnabledPrimitiveData.h"
#include "Templates/SubclassOf.h"
#include "TetherSpawnResults.h"
#include "Velociportable.h"
#include "WaterTableInteractionInterface.h"
#include "YankTargetInfo.h"
#include "Sackboy.generated.h"

class AActor;
class ABoomerangProjectile;
class AControlModeManager;
class AGingerbreadPlayerController;
class AGroundCrackContainer;
class AHandheldFlareToy;
class ARhythmicTransitionCannon;
class ARhythmicWobbleBlob;
class ASackboy;
class ASackboyDeathGhost;
class ASackboyVehicleBase;
class ATetheredWobbleBlob;
class ATransitionCannon;
class AWobbleBlob;
class UAkAudioEvent;
class UAkComponent;
class UBlastersMode;
class UBlastersTargetComponent;
class UBoomerangMode;
class UCapsuleComponent;
class UControlComponent;
class UControlScheme;
class UCostumeComponent;
class UFont;
class UForceFeedbackEffect;
class UGrappleHookMode;
class UGrappleTargetComponent;
class UHitPointsComponent;
class UInteractionComponent;
class UObject;
class UOverheadSackboyWidgetComponent;
class UPlayerInventory;
class UPoIComponent;
class UPrimitiveComponent;
class USMFuzzComponent;
class USMHairComponent;
class USackboyClient;
class USackboyCollision;
class USackboyDebug;
class USackboyEmotion;
class USackboyInput;
class USackboyJumpStompTargetComponent;
class USackboyLocomotion;
class USackboyPhysics;
class USackboySearch;
class USackboyToyComponent;
class USackboyVisuals;
class USceneComponent;
class USignalComponent;
class USkeletalMeshComponent;
class USleepComponent;
class USpawnPointComponent;
class USumoPhysicalMaterial;
class USurfaceDeformationComponent;
class UTelemetrySackboyBlueprintComponent;

UCLASS(Blueprintable)
class ASackboy : public APawn, public ICameraPointOfInterest, public ICarryable, public IHitPointsComponentEventReceiver, public IFlaglineUsable, public IVelociportable, public IWaterTableInteractionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowCurrentActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LogActivityTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MeasureJumps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MeasureSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MeasureStomps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawBasis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawCraftCutterTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawInputHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawActivityHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawPowerUpDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowInheritedMomentum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowPOIDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugAverageSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugCloseup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugTriggerEffectGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugShowStickInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugEnterJetpackMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RightStickCameraOverrideEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugShowFootstepHapticsDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugShowAttackHapticsDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugShowCarryHapticsDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ValidateLocalPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LazyValidateLocalPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValidationMaxDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowServerCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetDelta;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyEvent OnSackboySpawnInitiated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboySpawnedEvent OnSackboyBeginSpawnFromSpawnPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboySpawnedEvent OnSackboySpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyEvent OnSackboyDied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyEvent OnStartCutSceneEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFont* DebugFont;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float flaglineStepUpOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleExitCooldown;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VelocityRTPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuteBPTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAkComponent> AKComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioGroundSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioWaterEntrySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioAirSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VFX_LargeLandingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VFX_ShowLandingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugEmotions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpawnSlot, meta=(AllowPrivateAccess=true))
    int32 Net_Replicated_SpawnSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FTetherSpawnResults Net_Replicated_TetherSpawnResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FYankTargetInfo Net_Replicated_YankTargetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSackboyDeathSettings Net_Replicated_DeathSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool Net_Replicated_TriggeredSuperSlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=Net_OnReplicate_GettingReadyToSlap, meta=(AllowPrivateAccess=true))
    int32 Net_Replicated_GettingReadyToSlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FRollHoleInfo Net_Replicated_RollHoleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> Net_Replicated_CarriedPrimitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AGroundCrackContainer> Net_Replicated_CrackContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATransitionCannon> Net_Replicated_TransitionCannon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARhythmicTransitionCannon> Net_Replicated_RhythmicTransitionCannon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Net_Replicated_JumpToEnterObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGrabInfo Net_Replicated_GrabInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGrabReleaseInfo Net_Replicated_GrabReleaseInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FNetwork_GrappleTargetInfo Net_Replicated_GrappleTargetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USackboyToyComponent> Net_Replicated_CarriedToy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USackboyToyComponent> Net_Replicated_StowedToy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NetReplicatedEnterBubbleInfo, meta=(AllowPrivateAccess=true))
    FSackboyEnterBubbleInfo Net_Replicated_EnterBubbleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FSackboyExitBubbleInfo Net_Replicated_ExitBubbleInfo;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FBoundEmoteData Net_Replicated_SavedBoundEmotes[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool Net_Replicated_EmoteFromActingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FSackboyAnimSequenceRequest Net_AnimSequenceRequest;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyEvent OnSackboyUnderPerformingStateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsUnderPerforming, meta=(AllowPrivateAccess=true))
    bool Net_Replicated_IsUnderPerforming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalControllerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EControlMode Rep_CurrentControlMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool Rep_GloopState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool Rep_IsGloopedOntoSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString Rep_ControlScheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASackboyVehicleBase> Rep_CurrentVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Rep_TrophyTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 Rep_ConnectionQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SetVisibilityFlags, meta=(AllowPrivateAccess=true))
    uint8 VisibilityFlags;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDesyncDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SyncAirMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayDesync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USumoPhysicalMaterial* SnowMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* HealthCapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PowerUpHandsSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PowerUpFeetSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USackboyJumpStompTargetComponent* JumpStompTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTelemetrySackboyBlueprintComponent* TelemetryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHitPointsComponent* HitPointsComponentObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* GamepadAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCostumeComponent* CostumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USMFuzzComponent* FuzzComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalComponent* SignalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USurfaceDeformationComponent* SurfaceDeformationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* InteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* HealthInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USackboyCollision* Collision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USackboyInput* Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USackboyLocomotion* Locomotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USackboyPhysics* Physics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USackboyVisuals* Visuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USackboyEmotion* Emotions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USackboyClient* Client;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USackboyDebug* Debug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float InvulnerabilityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool InvulnerableFromDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* LedgePrimitive;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HitStopsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsInWorldMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsInTitleScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ExplorationTaxCollectabell;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHandheldFlareToy> FlareToyTemplate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInsideLevelBadge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASackboyDeathGhost* DeathGhostInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USackboySearch* Search;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* SpinAKHapticComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* RollAKHapticComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USleepComponent* SleepComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSetEnabledPrimitiveData> PrimitiveComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSetEnabledInteractionData> InteractionComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasAliveInPreviousLevel;
    
public:
    ASackboy(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WantsToBeRollStomping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WantsToAutoCollectHeart() const;
    
    UFUNCTION(BlueprintCallable)
    bool UpdateFloatingStateData(const FFloatStateProperties& FloatStateProperties);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEmotionalEvent(int32 EmotionID, float Priority, ESackboyEmotionalState State, int32 Level, float Time, bool WaitDuringIdle);
    
    UFUNCTION(BlueprintCallable)
    void TryToFallThroughSupport();
    
    UFUNCTION(BlueprintCallable)
    void TryToEquipPowerUp(EControlMode ControlMode, bool bSilent, bool bInstigator);
    
    UFUNCTION(BlueprintCallable)
    bool TryToEnterVehicle(ASackboyVehicleBase* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    bool TryToCollectItemComponent(USceneComponent* OtherComp, AActor* ProxyCollector);
    
    UFUNCTION(BlueprintCallable)
    bool TryToCollectItem(AActor* OtherActor, AActor* ProxyCollector);
    
    UFUNCTION(BlueprintCallable)
    void TriggerRespawnVehicle();
    
    UFUNCTION(BlueprintCallable)
    int32 TriggerEmotionalEvent(ESackboyEmotionSystem System, float Priority, ESackboyEmotionalState State, int32 Level, float Time, bool WaitDuringIdle);
    
    UFUNCTION(BlueprintCallable)
    void TransitionToLevelBadge(bool bTransitioning);
    
    UFUNCTION(BlueprintCallable)
    void TeleportPlayer(FVector Position, FRotator Rotation, bool bSnapCamera);
    
    UFUNCTION(BlueprintCallable)
    void StopVibration(UForceFeedbackEffect* vibration, const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    void StopUsingToy(bool dropIt);
    
    UFUNCTION(BlueprintCallable)
    void StopDualPlatformHaptics(UAkAudioEvent* BondHapticsStopEvent, UForceFeedbackEffect* ForceFeedbackEffect, FName ForceFeedbackTag);
    
    UFUNCTION(BlueprintCallable)
    void StopBeingGloopedOntoSurface();
    
    UFUNCTION(BlueprintCallable)
    void StartForcedInput(FVector InputVector);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldPosition(const FVector& WorldLocation, bool teleportSackboy);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool enable_render);
    
    UFUNCTION(BlueprintCallable)
    void SetupStartingEmotes();
    
    UFUNCTION(BlueprintCallable)
    void SetTitleScreenFlag(bool InTitleScreen);
    
    UFUNCTION(BlueprintCallable)
    void SetStickiness(float stickiness);
    
    UFUNCTION(BlueprintCallable)
    void SetSlideLockTarget(FVector Target);
    
    UFUNCTION(BlueprintCallable)
    void SetSlideFrictionScalar(float friction_scalar);
    
    UFUNCTION(BlueprintCallable)
    void SetSackboyToSuperSlap();
    
    UFUNCTION(BlueprintCallable)
    void SetSackboyToJetpack(bool useLockedDebugCamera);
    
    UFUNCTION(BlueprintCallable)
    void SetSackboyToIdle();
    
    UFUNCTION(BlueprintCallable)
    void SetSackboyToFalling(bool noBreakouts);
    
    UFUNCTION(BlueprintCallable)
    void SetSackboyToCutscene(bool EnableCollision, bool enableRendering, bool hideToysAndProps);
    
    UFUNCTION(BlueprintCallable)
    void SetSackboySpeedLimiter(float Limit);
    
    UFUNCTION(BlueprintCallable)
    void SetSackboyJumpRestricted(bool restricted);
    
    UFUNCTION(BlueprintCallable)
    void SetSackboyActionRestricted(bool restricted);
    
    UFUNCTION(BlueprintCallable)
    void SetPoICompForHeadLookAt(UPoIComponent* newpoi);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsAndCollisionState(bool State);
    
    UFUNCTION(BlueprintCallable)
    void SetHidden(bool bIsHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetGloopState(bool Enter);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusToWorldLocation();
    
    UFUNCTION(BlueprintCallable)
    bool SetFloatingTargetRotation(const FRotator& Rotator);
    
    UFUNCTION(BlueprintCallable)
    bool SetFloatingTargetLocation(const FVector& Target);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatingAnimationTumble(float playRateMin, float playRateMax, float startPositionMin, float startPositionMax);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatingAnimationRollOnSpot();
    
    UFUNCTION(BlueprintCallable)
    void SetFloatingAnimationRoll();
    
    UFUNCTION(BlueprintCallable)
    void SetEmote(int32 boundIndex, int32 EmoteIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetBouncingOffSackboy(bool Flag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ConfirmCannonArrived();
    
    UFUNCTION(BlueprintCallable)
    bool RequestYankOffSackboyToPosition(UObject* yankInstigator, const FVector& Destination, ESackboyActivity finalActivity, float destinationTolerance, bool isPartOfGlobalYank, bool shouldStopWhenTargetReached, bool UseYankedAnimation, bool delayYank);
    
    UFUNCTION(BlueprintCallable)
    bool RequestYankOffSackboyToActor(UObject* yankInstigator, AActor* destinationActor, const FVector& destinationOffset, ESackboyActivity finalActivity, float destinationTolerance, bool isPartOfGlobalYank, bool shouldStopWhenTargetReached, bool UseYankedAnimation, bool delayYank);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReportPickup(const FString& Name, const FString& Map, const FVector& pos);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSackboySpeedLimiter();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void ReleaseFromStruggle(ESackboyStruggleReleaseType ReleaseType);
    
    UFUNCTION(BlueprintCallable)
    void PutTrophyInSackboysHand();
    
    UFUNCTION(BlueprintCallable)
    void PutObjectInSackboysHand(AActor* putInHand, bool isWeapon);
    
    UFUNCTION(BlueprintCallable)
    void PreventGrapple();
    
    UFUNCTION(BlueprintCallable)
    void PrepareToSpawnAtSpawnPoint(USpawnPointComponent* spawn_point);
    
    UFUNCTION(BlueprintCallable)
    void PostEventToLocalGamepadWithSwitch(UAkAudioEvent* AkEvent, const FString& SwitchGroup, const FString& SwitchState);
    
    UFUNCTION(BlueprintCallable)
    void PostEventToGamepad(UAkAudioEvent* AkEvent);
    
    UFUNCTION(BlueprintCallable)
    void PlayVibration(UForceFeedbackEffect* vibration, const FName& Name, const float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayThrowHaptics(UAkAudioEvent* hapticEvent);
    
    UFUNCTION(BlueprintCallable)
    void PlaySpinHaptics(UAkAudioEvent* hapticEvent);
    
    UFUNCTION(BlueprintCallable)
    void PlayRollHaptics(UAkAudioEvent* hapticEvent);
    
    UFUNCTION(BlueprintCallable)
    void PlayDualPlatformHaptics(UAkAudioEvent* BondHapticsPlayEvent, UForceFeedbackEffect* ForceFeedbackEffect, FName ForceFeedbackTag, bool LoopingForceFeedback);
    
    UFUNCTION(BlueprintCallable)
    void OnThrownObjectHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnThrown(ASackboy* ThrownBy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnSlot();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetVisibilityFlags();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NetReplicatedEnterBubbleInfo();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsUnderPerforming();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadyToPlay();
    
    UFUNCTION(BlueprintCallable)
    void OnPlace(ASackboy* PickedUpBy);
    
    UFUNCTION(BlueprintCallable)
    void OnPickup(ASackboy* PickedUpBy);
    
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnExittedEndSequence();
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredEndSequence(bool OnlySackInArea);
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(AActor* thisActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnEndInteractionOverlap(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnEndCapOverlap(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, int32 sourceBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDrop(ASackboy* PickedUpBy, ECarryDropReason DropReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeathStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnCollectedPaint();
    
    UFUNCTION(BlueprintCallable)
    void OnCollectedLegendaryCostume();
    
    UFUNCTION(BlueprintCallable)
    void OnCollectedFullCostume();
    
    UFUNCTION(BlueprintCallable)
    void OnCollectedEmote();
    
    UFUNCTION(BlueprintCallable)
    void OnCollectedCostumePiece();
    
    UFUNCTION(BlueprintCallable)
    void OnCarriedInterceptModificationAttempt(FHitPointModifyResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnCarriedHit(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnCarriedBeginOverlap(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, int32 sourceBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCarriedBeginInteractionOverlap(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraManagerAvailableSnapToFocus(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraManagerAvailable(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(AActor* thisActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginInteractionOverlap(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginCapOverlap(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, int32 sourceBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAboutToBeSpawned();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Net_UpdateActorHiddenInGame(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_TriggerBurstWobbleBlob(AWobbleBlob* WobbleBlob, const bool fromRoll);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_TriggerBurstTetheredWobbleBlob(ATetheredWobbleBlob* TetheredWobbleBlob);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_TriggerBurstRhythmicWobbleBlob(ARhythmicWobbleBlob* RhythmicWobbleBlob);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_StartUsingToy(USackboyToyComponent* Toy, ASackboy* sackboyToyStolenFrom, bool isBeingPickedUp);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_SpawnBlasterProjectile(const FVector_NetQuantize100& Position, const FVector_NetQuantize100& Direction, const UBlastersTargetComponent* Target);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_SetIsUnderPerforming(bool underPerforming);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Net_Server_SendInputFrameToServer_NoRightStick(const FNetwork_UserInputFrame_NoRightStick& NewInput);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Net_Server_SendInputFrameToServer(const FNetwork_UserInputFrame& NewInput);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_SackboyPickupRequest(UPrimitiveComponent* prim);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_RollImpactDaze(const FVector_NetQuantize100& sackboyWorldPosition, AActor* OtherActor, const FVector_NetQuantize100& dazeDirection);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_ReleaseObject(const FGrabReleaseInfo& releaseInfo);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Net_Server_ModifyExpression(int32 boundIndex, ESackboyEmotionalState EmotionalState, int32 emotionLevel);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Net_Server_ModifyEmote(int32 boundIndex, int32 EmoteIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_LevelResetManagerSubLevelUnloaded();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_LevelResetManagerSubLevelReloaded();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_HitPointsModificationAppliedOnClient(const FHitPointModifyResult_Network& Packed, UHitPointsComponent* TargetHitPoints);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_GrappleStopSwing(const FVector_NetQuantize100& sackboyWorldPosition);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_GrappleStartSwing(const FVector_NetQuantize100& sackboyWorldPosition, UGrappleTargetComponent* GrappleTarget, const FVector_NetQuantize100& GrappleTargetPosition);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_GrabObject(const FGrabInfo& GrabInfo, bool skipInterpolate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_ExitRollRide(const FVector_NetQuantize100& sackboyWorldPosition, const FRotator& sackboyWorldRotation, float horizontalHopMultiplier, float verticalHopBoost);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_ExitBubble(ASackboy* Sackboy, const FSackboyExitBubbleInfo& Info);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_EnterRollRide(ASackboy* roller);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_EnterRollHole(ASackboy* Sackboy, const FRollHoleInfo& Info);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_EnterCrackContainer(AGroundCrackContainer* crackContainer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_EnterBubble(ASackboy* Sackboy, const FSackboyEnterBubbleInfo& Info);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_CollectCollectable(AActor* Collectable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_CarryPickupObject(UPrimitiveComponent* prim);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_CarryPerformThrow(const FVector_NetQuantize100& sackboyWorldPosition, const FRotator& sackboyWorldRotation, UPrimitiveComponent* throwPrim);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_BounceOnSomething(const FVector_NetQuantize100& sackboyWorldPosition, AActor* OtherActor, UPrimitiveComponent* SupportPrim, const FVector& bounceSurfaceVel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_BounceOnBouncepad(const FVector_NetQuantize100& sackboyWorldPosition, UObject* BouncePad, const FVector_NetQuantize100& targetVelocity);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Net_RemoveControlScheme(const UControlScheme* ControlSchemeTemplate);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Net_PushControlScheme(const UControlScheme* ControlSchemeTemplate);
    
public:
    UFUNCTION(BlueprintCallable)
    void Net_OnReplicate_GettingReadyToSlap();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Net_Client_SpawnBlasterProjectile(const FVector_NetQuantize100& Position, const FVector_NetQuantize100& Direction, const UBlastersTargetComponent* Target);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Net_Client_ResetHealth();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Net_Client_ModifyCollectabellQuantity(int32 Count);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Net_Client_ExitRollRide(const FVector_NetQuantize100& sackboyWorldPosition, const FRotator& sackboyWorldRotation, float horizontalHopMultiplier, float verticalHopBoost);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Net_Client_EnterRollRide(ASackboy* roller);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Net_Client_CarryPerformThrow(const FVector_NetQuantize100& sackboyWorldPosition, const FRotator& sackboyWorldRotation, UPrimitiveComponent* throwPrim);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Net_Client_CarryForceRelease(bool apply_impulse);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Net_Client_BounceOnBouncepad(const FVector_NetQuantize100& sackboyWorldPosition, UObject* BouncePad, const FVector_NetQuantize100& targetVelocity);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Net_Client_AddAdventureItemCount(const FString& ItemName, int32 Count);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_AnnounceSackboyInfo_NoRightStick(const FNetwork_SackboyAuthNetStatusFrame_NoRightStick& SackboyFrame);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Multicast_AnnounceSackboyInfo(const FNetwork_SackboyAuthNetStatusFrame& SackboyFrame);
    
    UFUNCTION(BlueprintCallable)
    void LaunchSackboy(const FVector& Impulse, bool applyAccel, bool asForce, ESackboyLaunchType LaunchType, bool ForceFalling);
    
    UFUNCTION(BlueprintCallable)
    void KillSackboy(bool bInstantDeath, bool bSetActivity, TEnumAsByte<ESackboyDeathReason::Type> DeathReason);
    
    UFUNCTION(BlueprintCallable)
    void JumpIntoObject(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void JumpIntoLevelBadge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingToy() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnderperforming();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTransitioningToLevelBadge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThrowingItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlapping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSackboyJumpRestricted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSackboyActionRestricted() const;
    
    UFUNCTION(BlueprintCallable)
    static bool IsSackboy(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRollRiding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRollLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRollLanding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRollingOnGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRolling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRollDiving() const;
    
    UFUNCTION(BlueprintCallable)
    static bool IsPartOfSackboy(const USceneComponent* component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnWorldMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnTitleScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnFlagline(AActor* checkThisFlagline) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNetworkGameHost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalGameHost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInWind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvulnerable(bool includeHitReactionState, bool onlyFromDamage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInVehicle() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInTetherExclusionZone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSuperSlap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSnowBall(float& SizePC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSlapMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideDoorway() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInJetpackCameraMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInJetpack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInHitReaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInGlobalYank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInESportLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInEndSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCutscene() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCloudPlatform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInBlackHole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsImprovedReadability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldingWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldingTrophy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldingBoomerang() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeadStomping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrounded(bool includeInVehicle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrappling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrappleSwinging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrabbing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGloopOnFeet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGloopedOntoSurface() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFloating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFallingThroughSupport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDespawning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeadOrDying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentHitPointsAboveZero() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConstrainedToFloor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConsideredAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCarryingHeavyObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCarrying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBouncingOffSackboyEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingYanked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingCarried() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlignedWithSurface() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAiTargettable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCraftCutterCarryableTag(const USceneComponent* OtherComp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetYankInstigator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWorldPositionProjectedToGround(FVector& WorldPosition, bool& FoundGround, float& GroundDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWorldPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetWorldOrientation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASackboyVehicleBase* GetVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USumoPhysicalMaterial* GetSurfaceMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStickiness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedAlongSurface() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRollOMeter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerSpawnState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerIndex(bool bWarnIfInvalid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGingerbreadPlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetPlayerColour() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCapsuleComponent* GetPhysicsCapsule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EControlMode GetPendingControlMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOverheadSackboyWidgetComponent* GetOverheadWidgetComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalControllerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLinearVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ESackboyDeathReason::Type> GetLastDeathReason() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLandingSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerInventory* GetInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USMHairComponent* GetHairMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGrappleHookMode* GetGrappleHookMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASackboy* GetGrabbedOrCarriedSackboy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetGrabbedOrCarriedPrimitive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentToyActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USpawnPointComponent* GetCurrentSpawnPointComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESackboyActivity GetCurrentSecondaryActivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESackboyActivity GetCurrentPrimaryActivity() const;
    
    UFUNCTION(BlueprintCallable)
    UPrimitiveComponent* GetCurrentItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentHitPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESackboyActivity GetCurrentActivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABoomerangProjectile* GetCraftCutter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AControlModeManager* GetControlModeManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UControlComponent* GetControlComponent() const;
    
    UFUNCTION(BlueprintCallable)
    UPrimitiveComponent* GetCarryPrimitive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraRelevance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBoomerangMode* GetBoomerangMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBlastersMode* GetBlastersMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESackboyCoopMove GetActiveCoopMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EControlMode GetActiveControlMode() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceRespawn(bool bSnapCamera);
    
    UFUNCTION(BlueprintCallable)
    bool ForceReleaseGrab();
    
    UFUNCTION(BlueprintCallable)
    void ForcePickupObject(UPrimitiveComponent* Primitive, bool requiresGrabButton);
    
    UFUNCTION(BlueprintCallable)
    void ExitVehicle();
    
    UFUNCTION(BlueprintCallable)
    void ExitTetherExclusionZone(UObject* tether_exclusion_zone);
    
    UFUNCTION(BlueprintCallable)
    bool ExitSnowballState(ESackboyActivity nextActivity, float InvulnerableDuration);
    
    UFUNCTION(BlueprintCallable)
    bool ExitFloatingState(ESackboyActivity nextActivity, float InvulnerableDuration, bool KeepVelocityBeforeFloating);
    
    UFUNCTION(BlueprintCallable)
    void ExitCloudPlatform(AActor* CloudPlatformActor);
    
    UFUNCTION(BlueprintCallable)
    void EnterTetherExclusionZone(UObject* tether_exclusion_zone);
    
    UFUNCTION(BlueprintCallable)
    bool EnterSnowballState();
    
    UFUNCTION(BlueprintCallable)
    bool EnterFloatingState(const FFloatStateProperties& FloatStateProperties);
    
    UFUNCTION(BlueprintCallable)
    void EnterCloudPlatform(AActor* CloudPlatformActor);
    
    UFUNCTION(BlueprintCallable)
    void EndForcedInput();
    
    UFUNCTION(BlueprintCallable)
    void DropToy();
    
    UFUNCTION(BlueprintCallable)
    void DropThisItem(AActor* ItemActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void DropThisDestroyedItem(AActor* ItemActor);
    
    UFUNCTION(BlueprintCallable)
    void DropObjectInSackboysHand(bool destroyObject, bool informWeapon);
    
    UFUNCTION(BlueprintCallable)
    void DoLeafPrototype(float param0, float Param1);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SlappedEachOther();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HighFiveSuccess();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CapitalistUpate();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_AwardTrophyProgress(const FName& InTrophyID);
    
    UFUNCTION(BlueprintCallable)
    void ClearSlideTarget();
    
    UFUNCTION(BlueprintCallable)
    bool ChangeSackboyVelocity(const FVector& changeVelocityVector, ESackboyLaunchVectorType vectorType, ESackboyLaunchType theLaunchType, ESackboyLaunchKillVelocity killSackboyVelocity, bool disableAirSteer, bool disableAirDrag, bool disableInAirActions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRequestYank(bool shouldBePartOfGlobalYank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayPowerUpEquipSequence(const FSackboyAnimSequenceRequest& Request) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanLaunchSackboy(ESackboyLaunchType launch_type, const FVector& Origin, const FVector& Direction, bool NewDebug);
    
    UFUNCTION(BlueprintCallable)
    void CancelSackboyVelocityChange();
    
    UFUNCTION(BlueprintCallable)
    void CancelLanding();
    
    UFUNCTION(BlueprintCallable)
    void CancelGrapple();
    
    UFUNCTION(BlueprintCallable)
    void CancelEmotionalEvent(int32 EmotionID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalcFloorPosition() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool ShouldWaitBeforePickup() override PURE_VIRTUAL(ShouldWaitBeforePickup, return false;);
    
    UFUNCTION()
    void OnSackboyDeath(ASackboy* DeadSackboy) override PURE_VIRTUAL(OnSackboyDeath,);
    
};

