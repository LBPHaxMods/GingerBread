#include "CheckpointObject.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "GameplayTagComponent.h"
#include "Net/UnrealNetwork.h"
#include "SpawnPointComponent.h"
#include "TriggerActorComponent.h"

ACheckpointObject::ACheckpointObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnPointComponent = CreateDefaultSubobject<USpawnPointComponent>(TEXT("SpawnPointComponent"));
    this->RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Collision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Collision"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->OpenVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("OpenVFX"));
    this->CloseVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("CloseVFX"));
    this->RaysMeshVFX = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RaysMeshVFX"));
    this->RingMeshVFX = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RingMeshVFX"));
    this->RibbonScrollMeshVFX = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RibbonMeshVFX"));
    this->WobbleVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("WobbleVFX"));
    this->PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->ActivationTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ActivationTimeline"));
    this->OpenTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("OpenTimeline"));
    this->CloseTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("CloseTimeline"));
    this->OpenAnimationTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("OpenAnimationTimeline"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->ActivationPulseCurve = NULL;
    this->ActivationFlickerCurve = NULL;
    this->ActivationTimelineLength = 1.00f;
    this->ActivationFlickerMultiplier = 800.00f;
    this->ActivationEmissiveRModifer = 0.10f;
    this->ActivationEmissiveGModifer = 0.02f;
    this->ActivationEmissiveOnModifer = 1.00f;
    this->ActivationEmissiveBModifer = 0.02f;
    this->ActivationFFB = NULL;
    this->ActivationHaptics = NULL;
    this->OpenIntensityCurve = NULL;
    this->OpenTimelineLength = 1.00f;
    this->OpenIntensityCurveMultiplier = 1000.00f;
    this->CloseIntensityCurve = NULL;
    this->CloseTimelineLength = 0.50f;
    this->CloseIntensityCurveMultiplier = 1000.00f;
    this->OpenAnimationCurve = NULL;
    this->OpenAnimationTimelineLength = 1.00f;
    this->OpenAnimationRaysVfxRotationDeltaZModifier = 5.00f;
    this->OpenAnimationRibbonScrollVfxScaleZModifier = 0.75f;
    this->OpenAnimationRibbonScrollVfxRotationDeltaZModifier = -5.00f;
    this->OpenFFB = NULL;
    this->OpenHaptics = NULL;
    this->ActivateAnim = NULL;
    this->OpenAnim = NULL;
    this->CloseAnim = NULL;
    this->OpenAudioEvent = NULL;
    this->OpenGamepadAudioEvent = NULL;
    this->CloseAudioEvent = NULL;
    this->ActivateAudioEvent = NULL;
    this->ActivateGamepadAudioEvent = NULL;
    this->LightRingDisabledEmissiveIntensity = 0.00f;
    this->LightRingNormalEmissiveIntensity = 0.00f;
    this->FlapsNewMat = NULL;
    this->FlapsActiveMat = NULL;
    this->FlapsDisabledForLMSMat = NULL;
    this->IsOpen = false;
    this->IsActive = false;
    this->LifetimeState = ESpawnPointLifetimeState::New;
    this->LightRingDynamicMaterialInst = NULL;
    this->FlapsDynamicMaterialInst = NULL;
    this->ThreadDynamicMaterialInst = NULL;
    this->SpawnPointComponent->SetupAttachment(RootComp);
    this->Collision->SetupAttachment(RootComp);
    this->SkeletalMesh->SetupAttachment(Collision);
    this->OpenVFX->SetupAttachment(Collision);
    this->CloseVFX->SetupAttachment(Collision);
    this->RaysMeshVFX->SetupAttachment(Collision);
    this->RingMeshVFX->SetupAttachment(Collision);
    this->RibbonScrollMeshVFX->SetupAttachment(Collision);
    this->WobbleVFX->SetupAttachment(Collision);
    this->PointLight->SetupAttachment(Collision);
    this->GameplayTagComponent->SetupAttachment(Collision);
}

void ACheckpointObject::SetupFromBlutility(USpawnPointComponent* InSpawnPoint) {
}

void ACheckpointObject::OpenTL_UpdateIntensity(const float Intensity) {
}

void ACheckpointObject::OpenTL_Finished() {
}

void ACheckpointObject::OpenAnimationTL_Update(const float Value) {
}

void ACheckpointObject::OnSpawnPointLifetimeState(USpawnPointComponent* SpawnPoint, ESpawnPointLifetimeState State) {
}

void ACheckpointObject::OnSpawnPointDeactivated(USpawnPointComponent* SpawnPoint) {
}

void ACheckpointObject::OnSpawnPointActivated(USpawnPointComponent* SpawnPoint, ASackboy* Sackboy) {
}

void ACheckpointObject::OnSpawnComponentPreSpawn(USpawnPointComponent* SpawnPoint) {
}

void ACheckpointObject::OnSpawnComponentPostSpawn(USpawnPointComponent* SpawnPoint, bool FirstTime) {
}

void ACheckpointObject::OnRep_LifetimeState() {
}

void ACheckpointObject::OnRep_IsOpen() {
}

void ACheckpointObject::OnRep_IsActive() {
}

void ACheckpointObject::DisableSkeletalMeshTick(UAnimationAsset* Animation) {
}

void ACheckpointObject::CloseTL_UpdateIntensity(const float Intensity) {
}

void ACheckpointObject::CloseTL_Finished() {
}

void ACheckpointObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACheckpointObject, IsOpen);
    DOREPLIFETIME(ACheckpointObject, IsActive);
    DOREPLIFETIME(ACheckpointObject, LifetimeState);
}


