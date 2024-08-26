#include "VexConveyorController.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Components/TextRenderComponent.h"
#include "CSPHelperComponent.h"
#include "Net/UnrealNetwork.h"

AVexConveyorController::AVexConveyorController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->TextRender = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRender"));
    this->AKConveyorAudio = CreateDefaultSubobject<UAkComponent>(TEXT("AKConveyorAudio"));
    this->AKConveyorHaptics = CreateDefaultSubobject<UAkComponent>(TEXT("AKConveyorHaptics"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->EncounterVersion = EVexEncounterVersion::Invalid;
    this->TileSystemManager = NULL;
    this->CameraArea = NULL;
    this->ConveyorGrinder = NULL;
    this->VehicleSplashVFXLeft = NULL;
    this->VehicleSplashVFXRight = NULL;
    this->BackgroundJumpHeight = 150.00f;
    this->FlamejetsPossiblyActivePerConveyor.AddDefaulted(4);
    this->ConveyorForwardSFX = NULL;
    this->ConveyorBackwardsSFX = NULL;
    this->ConveyorStopSFX = NULL;
    this->SlowdownConveyorSFX = NULL;
    this->RotateShakeSFX = NULL;
    this->ConveyorRotateSFX = NULL;
    this->ConveyorRotateStopSFX = NULL;
    this->ConveyorDirectionChangeSFX = NULL;
    this->ConveyorJumpDescendSFX = NULL;
    this->ConveyorRevUpSFX = NULL;
    this->ConveyorRevDownSFX = NULL;
    this->ConveyorSteamSFX = NULL;
    this->VexLandSFX = NULL;
    this->VexJumpSFX = NULL;
    this->VexJumpWarningSFX = NULL;
    this->ConveyorForwardHaptic = NULL;
    this->ConveyorBackwardsHaptic = NULL;
    this->ConveyorStopHaptic = NULL;
    this->SlowdownConveyorHaptic = NULL;
    this->RotateShakeHaptic = NULL;
    this->ConveyorRotateHaptic = NULL;
    this->ConveyorRotateStopHaptic = NULL;
    this->ConveyorDirectionChangeHaptic = NULL;
    this->ConveyorJumpDescendHaptic = NULL;
    this->ConveyorRevUpHaptic = NULL;
    this->ConveyorRevDownHaptic = NULL;
    this->ConveyorSteamHaptic = NULL;
    this->VexLandHaptic = NULL;
    this->VexJumpHaptic = NULL;
    this->VexJumpWarningHaptic = NULL;
    this->LandVFX = NULL;
    this->MaterialParameterCollection = NULL;
    this->WorldRotSpeed = 30.00f;
    this->NormalSpeed = 15.00f;
    this->FastSpeed = 37.00f;
    this->Rep_IsTickEnabled = false;
    this->PersistentHapticEvent = NULL;
    this->PersistentAudioEvent = NULL;
    this->Action_FlameSequence = NULL;
    this->Action_InitialStartup = NULL;
    this->Action_SlowToStop = NULL;
    this->Action_MoveFast = NULL;
    this->Action_SignpostJump = NULL;
    this->Action_Jump = NULL;
    this->Action_Turn = NULL;
    this->TextRender->SetupAttachment(RootComponent);
    this->AKConveyorAudio->SetupAttachment(RootComponent);
    this->AKConveyorHaptics->SetupAttachment(RootComponent);
}

void AVexConveyorController::TriggerSingleStompFX_Implementation() {
}

void AVexConveyorController::TriggerRageAnticipationFX_Implementation() {
}

void AVexConveyorController::TriggerJumpLandFX_Implementation() {
}



void AVexConveyorController::SingleStomp_Delayed0() {
}

void AVexConveyorController::SingleStomp(bool moveSimultaneously) {
}


void AVexConveyorController::PlayConveyorHaptics_Implementation(UAkAudioEvent* InHapticEvent, bool bUseGlobalComponent) {
}

void AVexConveyorController::PlayAudioEvent_Implementation(UAkAudioEvent* InAudioEvent) {
}

void AVexConveyorController::OnRep_StompData() {
}

void AVexConveyorController::OnRep_PersistentConveyorHaptics() {
}

void AVexConveyorController::OnRep_PersistentAudioEvent() {
}

void AVexConveyorController::OnRep_IsTickEnabled() {
}

void AVexConveyorController::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer) {
}


void AVexConveyorController::OnJumpLand_Implementation() {
}

void AVexConveyorController::OnCameraManagerAvailable(AActor* ManagerActor) {
}

void AVexConveyorController::BeginPlay_Delayed0() {
}


void AVexConveyorController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVexConveyorController, Rep_IsTickEnabled);
    DOREPLIFETIME(AVexConveyorController, Rep_StompData);
    DOREPLIFETIME(AVexConveyorController, ServerAccelerationData);
    DOREPLIFETIME(AVexConveyorController, RotationParameters_Server);
    DOREPLIFETIME(AVexConveyorController, ServerRotationData);
    DOREPLIFETIME(AVexConveyorController, SeverJumpingSignpostData);
    DOREPLIFETIME(AVexConveyorController, ServerJumpingData);
    DOREPLIFETIME(AVexConveyorController, PersistentHapticEvent);
    DOREPLIFETIME(AVexConveyorController, PersistentAudioEvent);
}


