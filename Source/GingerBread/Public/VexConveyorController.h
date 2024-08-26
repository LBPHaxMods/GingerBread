#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraPointOfInterest.h"
#include "EPlayerJoinDirection.h"
#include "EVexConveyorAccelerationMode.h"
#include "EVexEncounterVersion.h"
#include "GingerbreadPlayerId.h"
#include "OnJumpDelegateDelegate.h"
#include "OnStartedSpinningDelegate.h"
#include "OnStoppedFlameJetSequenceDelegate.h"
#include "OnStoppedSpinningDelegate.h"
#include "OnVexConveyorStompDelegate.h"
#include "VexConveyorAccelerationServerData.h"
#include "VexConveyorControllerStompData.h"
#include "VexConveyorJetSetup.h"
#include "VexConveyorJumpingServerData.h"
#include "VexConveyorJumpingSignpostServerData.h"
#include "VexConveyorMovementParameters.h"
#include "VexConveyorRotationParameters.h"
#include "VexConveyorRotationServerData.h"
#include "VexConveyorSpeedChangedDelegate.h"
#include "VexConveyorController.generated.h"

class ACameraArea;
class AEmitter;
class AMoverTool2;
class ASackboy;
class AVexConveyor;
class AVexConveyorGrinder;
class AVexTileSystemManager;
class UAkAudioEvent;
class UAkComponent;
class UCSPHelperComponent;
class UMaterialParameterCollection;
class UParticleSystem;
class USceneComponent;
class UTextRenderComponent;
class UVexConveyorAction;
class UVexConveyorSlowToStopAction;

UCLASS(Blueprintable)
class AVexConveyorController : public AActor, public ICameraPointOfInterest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* TextRender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AKConveyorAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AKConveyorHaptics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCSPHelperComponent* CSPHelperComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVexEncounterVersion EncounterVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVexTileSystemManager* TileSystemManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVexConveyor*> VexConveyors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraArea* CameraArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVexConveyorGrinder* ConveyorGrinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpikeyRollerAimActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEmitter* VehicleSplashVFXLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEmitter* VehicleSplashVFXRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEmitter*> MovingUpDownParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEmitter*> RageAnticipationParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMoverTool2*> InnerConveyorMovers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMoverTool2*> OuterConveyorMovers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackgroundJumpHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FlamejetsPossiblyActivePerConveyor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVexConveyorJetSetup> JetSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorForwardSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorBackwardsSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorStopSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SlowdownConveyorSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RotateShakeSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorRotateSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorRotateStopSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorDirectionChangeSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorJumpDescendSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorRevUpSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorRevDownSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorSteamSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VexLandSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VexJumpSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VexJumpWarningSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorForwardHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorBackwardsHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorStopHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SlowdownConveyorHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RotateShakeHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorRotateHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorRotateStopHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorDirectionChangeHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorJumpDescendHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorRevUpHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorRevDownHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ConveyorSteamHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VexLandHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VexJumpHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VexJumpWarningHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LandVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialXParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialSpeedParameterName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexConveyorSpeedChanged OnConveyorSpeedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStoppedFlameJetSequence StoppedFlameJetSequence;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartedSpinning StartedSpinning;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStoppedSpinning StoppedSpinning;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVexConveyorStomp OnConveyorStomp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJumpDelegate JumpStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJumpDelegate JumpApexReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJumpDelegate JumpEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVexConveyorAccelerationMode, FVexConveyorMovementParameters> AccelerationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldRotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsTickEnabled, meta=(AllowPrivateAccess=true))
    bool Rep_IsTickEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StompData, meta=(AllowPrivateAccess=true))
    FVexConveyorControllerStompData Rep_StompData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVexConveyorAccelerationServerData ServerAccelerationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVexConveyorRotationParameters RotationParameters_Server;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVexConveyorRotationServerData ServerRotationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVexConveyorJumpingSignpostServerData SeverJumpingSignpostData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVexConveyorJumpingServerData ServerJumpingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PersistentConveyorHaptics, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PersistentHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PersistentAudioEvent, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PersistentAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVexConveyorAction* Action_FlameSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVexConveyorAction* Action_InitialStartup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVexConveyorSlowToStopAction* Action_SlowToStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVexConveyorAction* Action_MoveFast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVexConveyorAction* Action_SignpostJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVexConveyorAction* Action_Jump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVexConveyorAction* Action_Turn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASackboy*> SackboysOnConveyors;
    
public:
    AVexConveyorController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerSingleStompFX();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerRageAnticipationFX();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerJumpLandFX();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StompReverseMover(AMoverTool2* moverToReverse);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StompForwardMover(AMoverTool2* moverToReverse);
    
private:
    UFUNCTION(BlueprintCallable)
    void SingleStomp_Delayed0();
    
public:
    UFUNCTION(BlueprintCallable)
    void SingleStomp(bool moveSimultaneously);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetZCamRotation(float newZRot);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayConveyorHaptics(UAkAudioEvent* InHapticEvent, bool bUseGlobalComponent);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayAudioEvent(UAkAudioEvent* InAudioEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StompData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PersistentConveyorHaptics();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PersistentAudioEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsTickEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpSignpostStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnJumpLand();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCameraManagerAvailable(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable)
    void BeginPlay_Delayed0();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateFlameJets();
    

    // Fix for true pure virtual functions not being implemented
};

