#include "ESportsRaceStart.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

AESportsRaceStart::AESportsRaceStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->StartBlockingBox = CreateDefaultSubobject<UBoxComponent>(TEXT("StartBlockingBox"));
    this->LeftGateCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftGateCollider"));
    this->RightGateCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("RightGateCollider"));
    this->GameplayTags = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTags"));
    this->StartOverlapCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StartOverlapCollision"));
    this->StartInteractCollision = CreateDefaultSubobject<UInteractionComponent>(TEXT("StartInteractCollision"));
    this->StartTimerCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("StartTimerCollision"));
    this->LightDrone = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LightDrone"));
    this->Light1 = NULL;
    this->Light2 = NULL;
    this->Light3 = NULL;
    this->Ak_RaceStartLightDrone = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_RaceStartLightDrone"));
    this->Ak_HapticsRaceStartLightDrone = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_HapticsRaceStartLightDrone"));
    this->StartGate = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("StartGate"));
    this->Ak_RaceStartGate = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_RaceStartGate"));
    this->Ak_HapticsRaceStartGate = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_HapticsRaceStartGate"));
    this->ParticleStartGate = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("P_StartGate"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->GateIdleAnim = NULL;
    this->GateOpenAnim = NULL;
    this->DroneIdleAnim = NULL;
    this->DroneStartAnim = NULL;
    this->DroneDropCurve = NULL;
    this->DroneRiseCurve = NULL;
    this->CountDownCurve = NULL;
    this->DroneCountdownSFX = NULL;
    this->DroneCountdownFinalSFX = NULL;
    this->DroneStartSFX = NULL;
    this->DroneStopSFX = NULL;
    this->GateOpenSFX = NULL;
    this->DroneCountdownHaptic = NULL;
    this->DroneCountdownFinalHaptic = NULL;
    this->DroneStartHaptic = NULL;
    this->DroneStopHaptic = NULL;
    this->GateOpenHaptic = NULL;
    this->GateOpenGamepadAudio = NULL;
    this->DroneRiseHeight = 150.00f;
    this->Checkpoint = NULL;
    this->UseMaterialOverrideWorldLocation = false;
    this->MaterialOverrideWorldLocation = EWorldLocation::Amazon;
    this->ResetDelay = 1.00f;
    this->AUTH_bIsOpen = false;
    this->LeftGateCollider->SetupAttachment(StartGate);
    this->RightGateCollider->SetupAttachment(StartGate);
    this->GameplayTags->SetupAttachment(StartGate);
    this->StartOverlapCollision->SetupAttachment(RootComponent);
    this->StartInteractCollision->SetupAttachment(RootComponent);
    this->StartTimerCollision->SetupAttachment(RootComponent);
    this->LightDrone->SetupAttachment(RootComponent);
    this->Ak_RaceStartLightDrone->SetupAttachment(LightDrone);
    this->Ak_HapticsRaceStartLightDrone->SetupAttachment(LightDrone);
    this->StartGate->SetupAttachment(RootComponent);
    this->Ak_RaceStartGate->SetupAttachment(StartGate);
    this->Ak_HapticsRaceStartGate->SetupAttachment(StartGate);
    this->ParticleStartGate->SetupAttachment(StartGate);
    this->StartBlockingBox->SetupAttachment(StartGate);
}

void AESportsRaceStart::StartCountdown() {
}

void AESportsRaceStart::RESET() {
}

void AESportsRaceStart::OnTimedChallengeAvailable(AActor* ManagerActor) {
}

void AESportsRaceStart::OnStartTimerCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AESportsRaceStart::OnPostSpawn(USpawnPointComponent* SpawnPoint, bool first_time) {
}

void AESportsRaceStart::OnLevelSettingsAvailable(AActor* Manager) {
}

void AESportsRaceStart::OnCutsceneManagerAvailable(AActor* pManagerActor) {
}

void AESportsRaceStart::DroneRiseFinished() {
}

void AESportsRaceStart::DroneRiseCallback(float val) {
}

void AESportsRaceStart::DroneDropCallback(float val) {
}

void AESportsRaceStart::DisableStartGateTick(UAnimationAsset* Animation) {
}

void AESportsRaceStart::CountdownFinished() {
}

void AESportsRaceStart::CountdownCallback(float val) {
}

void AESportsRaceStart::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AESportsRaceStart, AUTH_bIsOpen);
}


