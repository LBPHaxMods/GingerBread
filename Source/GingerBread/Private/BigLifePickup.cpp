#include "BigLifePickup.h"
#include "AkComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "CollectableHUDMoverComponent.h"
#include "Net/UnrealNetwork.h"
#include "SpotShadowComponent.h"

ABigLifePickup::ABigLifePickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldDestroyOnCollected = false;
    this->CanImmediatelyCollectFromPickupContainer = true;
    this->ShouldUseSackboyTracker = false;
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));
    this->GlowMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GlowMesh"));
    this->PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->CollectCollisionComponent = NULL;
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->OverlapManager = NULL;
    this->CollectableHUDMover = CreateDefaultSubobject<UCollectableHUDMoverComponent>(TEXT("CollectableHUDMover"));
    this->LightFlashTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("LightFlashTimeline"));
    this->LerpToSackboyTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("LerpToSackboyTimeline"));
    this->AboveHeadHangTime = 0.75f;
    this->UseDampening = true;
    this->ImpulseMultiplier = 25.00f;
    this->AdditiveImpulseZ = 4.00f;
    this->SpawnSound = NULL;
    this->CollectSound = NULL;
    this->FlashSound = NULL;
    this->ToHUDSound = NULL;
    this->FalloverSound = NULL;
    this->RollingSound = NULL;
    this->RollingStopSound = NULL;
    this->CollectFlashSoundDelay = 1.50f;
    this->FallenMesh = NULL;
    this->ScoreToAward = 50;
    this->CollectionFX = NULL;
    this->PickupGamepadAudio = NULL;
    this->HitHUDGamepadAudio = NULL;
    this->BeginCollectedHaptics = NULL;
    this->EndCollectedHaptics = NULL;
    this->HitHUDHaptics = NULL;
    this->CollectedLerpCurve = NULL;
    this->LightFlashCurve = NULL;
    this->CameraEffect = NULL;
    this->CollectingSackboy = NULL;
    this->CurrentState = EBigLifePickupState::Spawned;
    this->SkeletalMesh->SetupAttachment(RootComponent);
    this->PickupMesh->SetupAttachment(SkeletalMesh);
    this->GlowMesh->SetupAttachment(PickupMesh);
    this->PointLight->SetupAttachment(SkeletalMesh);
    this->SpotShadow->SetupAttachment(SkeletalMesh);
    this->AudioComponent->SetupAttachment(PickupMesh);
}

void ABigLifePickup::OnTriggerCollectionAnimEvent() {
}

void ABigLifePickup::OnRep_Sackboy() {
}

void ABigLifePickup::OnRep_CurrentState() {
}

void ABigLifePickup::OnMoverComplete(UCollectableHUDMoverComponent* mover) {
}

void ABigLifePickup::OnLightFlashIntensityTimelineUpdate(const float Alpha) {
}

void ABigLifePickup::OnLerpToSackboyTimelineUpdate(const float Alpha) {
}

void ABigLifePickup::OnLerpToSackboyTimelineFinished() {
}

void ABigLifePickup::OnFallover() {
}

void ABigLifePickup::OnCollectingSackboyDestroyed(AActor* DestroyedActor) {
}

void ABigLifePickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABigLifePickup, ImpulseMultiplier);
    DOREPLIFETIME(ABigLifePickup, AdditiveImpulseZ);
    DOREPLIFETIME(ABigLifePickup, CollectingSackboy);
    DOREPLIFETIME(ABigLifePickup, CurrentState);
}


