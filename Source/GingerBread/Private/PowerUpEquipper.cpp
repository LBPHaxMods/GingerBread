#include "PowerUpEquipper.h"
#include "AkComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "OverlapManagerComponent.h"
#include "TriggerActorComponent.h"

APowerUpEquipper::APowerUpEquipper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->PlinthTriggerComponent = CreateDefaultSubobject<USphereComponent>(TEXT("PlinthTriggerComponent"));
    this->PowerUpTriggerComponent = CreateDefaultSubobject<USphereComponent>(TEXT("PowerUpTriggerComponent"));
    this->PlinthSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PlinthSkeletalMeshComponent"));
    this->PowerUpRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PowerUpRootComponent"));
    this->SmallLightShaftMeshComponent1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SmallLightShaftMeshComponent1"));
    this->SmallLightShaftMeshComponent2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SmallLightShaftMeshComponent2"));
    this->SmallLightShaftMeshComponent3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SmallLightShaftMeshComponent3"));
    this->StarLightShaftMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StarLightShaftMeshComponent"));
    this->HexagonalLightShaftMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HexagonalLightShaftMeshComponent"));
    this->PlinthSpotLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("PlinthSpotLightComponent"));
    this->IdleParticleSystemComponent1 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("IdleParticleSystemComponent1"));
    this->IdleParticleSystemComponent2 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("IdleParticleSystemComponent2"));
    this->IdleParticleSystemComponent3 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("IdleParticleSystemComponent3"));
    this->PickingUpParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PickingUpParticleSystemComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_PowerUpEquipper"));
    this->PlinthOverlapManagerComponent = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("PlinthOverlapManagerComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->RetractionLightIntensityTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("RetractionLightShaftIntensityTimeline"));
    this->CollectionLightIntensityTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("CollectionLightShaftIntensityTimeline"));
    this->TrailMovementTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("TrailMovementTimeline"));
    this->PlinthInteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("PlinthInteractionComponent"));
    this->PowerUpInteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("PowerUpInteractionComponent"));
    this->ControlMode = EControlMode::None;
    this->UsePowerupEquipSequence = true;
    this->RetractionLightIntensityDuration = 0.40f;
    this->RetractionLightToggleEventTime = 0.50f;
    this->ExpansionLightAnimationDelay = 1.00f;
    this->CollectionLightIntensityDuration = 0.24f;
    this->TrailMovementDuration = 2.00f;
    this->TrailMovementUpDistance = 20.00f;
    this->TrailMovementOutwardDistance = 10.00f;
    this->RetractionMainLightShaftIntensityCurve = NULL;
    this->RetractionOtherLightIntensitiesCurve = NULL;
    this->CollectionStarLightShaftIntensityCurve = NULL;
    this->TrailMovementUpCurve = NULL;
    this->TrailMovementOutwardCurve = NULL;
    this->TrailMovementMoveTowardsPlayerCurve = NULL;
    this->PlinthMaterialSource = NULL;
    this->SmallLightShaftMaterialSource = NULL;
    this->StarLightShaftMaterialSource = NULL;
    this->HexagonalLightShaftMaterialSource = NULL;
    this->TrailParticleSystem = NULL;
    this->CameraEffect = NULL;
    this->PlayIdleAudioEvent = NULL;
    this->StopIdleAudioEvent = NULL;
    this->RetractionAudioEvent = NULL;
    this->ExpansionAudioEvent = NULL;
    this->LightTurnOnAudioEvent = NULL;
    this->LightTurnOffAudioEvent = NULL;
    this->PickUpAudioEvent = NULL;
    this->PickUpGamepadAudioEvent = NULL;
    this->PickUpHapticsEvent = NULL;
    this->TrailMovementLoopingEvent = NULL;
    this->TrailMovementFinishEvent = NULL;
    this->PlinthDynamicMaterialInstance = NULL;
    this->PlinthCentreDynamicMaterialInstance = NULL;
    this->SmallLightShaftDynamicMaterialInstance = NULL;
    this->StarLightShaftDynamicMaterialInstance = NULL;
    this->HexagonalLightShaftDynamicMaterialInstance = NULL;
    this->PlinthSpotLightComponent->SetupAttachment(PlinthSkeletalMeshComponent);
    this->IdleParticleSystemComponent1->SetupAttachment(PlinthSkeletalMeshComponent);
    this->PickingUpParticleSystemComponent->SetupAttachment(PlinthSkeletalMeshComponent);
    this->AkComponent->SetupAttachment(PlinthSkeletalMeshComponent);
    this->PlinthInteractionComponent->SetupAttachment(PlinthTriggerComponent);
    this->PowerUpInteractionComponent->SetupAttachment(PowerUpTriggerComponent);
    this->PlinthTriggerComponent->SetupAttachment(RootComponent);
    this->PowerUpTriggerComponent->SetupAttachment(PowerUpRootComponent);
    this->PlinthSkeletalMeshComponent->SetupAttachment(RootComponent);
}

void APowerUpEquipper::StartReversingRetractionTimeline() {
}

void APowerUpEquipper::OnTrailMovementUpAlphaUpdate(float Alpha) {
}

void APowerUpEquipper::OnTrailMovementTimelinePostUpdate() {
}

void APowerUpEquipper::OnTrailMovementTimelineFinished() {
}

void APowerUpEquipper::OnTrailMovementOutwardAlphaUpdate(float Alpha) {
}

void APowerUpEquipper::OnTrailMovementMoveTowardsPlayerAlphaUpdate(float Alpha) {
}

void APowerUpEquipper::OnRetractionOtherLightIntensitiesAlphaUpdate(float Alpha) {
}

void APowerUpEquipper::OnRetractionMainLightShaftIntensityAlphaUpdate(float Alpha) {
}

void APowerUpEquipper::OnRetractionLightToggledEvent() {
}

void APowerUpEquipper::OnRep_InitialCollector() {
}

void APowerUpEquipper::OnPowerUpTriggerBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APowerUpEquipper::OnPowerUpTriggerBeginInteraction(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void APowerUpEquipper::OnPlinthTriggerEndOverlapLastSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void APowerUpEquipper::OnPlinthTriggerEndInteractionLastSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void APowerUpEquipper::OnPlinthTriggerBeginOverlapFirstSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APowerUpEquipper::OnPlinthTriggerBeginInteractionFirstSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void APowerUpEquipper::OnCollectionStarLightShaftIntensityAlphaUpdate(float Alpha) {
}

void APowerUpEquipper::DestroyTrailParticles() {
}

void APowerUpEquipper::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APowerUpEquipper, InitialCollector);
}


