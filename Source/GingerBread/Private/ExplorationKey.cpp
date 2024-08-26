#include "ExplorationKey.h"
#include "AkComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "CollectableHUDMoveRotatorComponent.h"
#include "CollectablePickupMoverComponent.h"
#include "FloatingCollectableComponent.h"
#include "PoIComponent.h"
#include "SpotShadowComponent.h"

AExplorationKey::AExplorationKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkCollectedAudioComponent"));
    this->ShouldDestroyOnCollected = false;
    this->PointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLightComponent"));
    this->SpotShadowComponent = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadowComponent"));
    this->ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
    this->PoIComponent = CreateDefaultSubobject<UPoIComponent>(TEXT("PoIComponent"));
    this->FloatingCollectableComponent = CreateDefaultSubobject<UFloatingCollectableComponent>(TEXT("FloatingCollectableComponent"));
    this->CollectablePickupMoverComponent = CreateDefaultSubobject<UCollectablePickupMoverComponent>(TEXT("CollectablePickupMoverComponent"));
    this->CollectableHUDMoveRotatorComponent = CreateDefaultSubobject<UCollectableHUDMoveRotatorComponent>(TEXT("CollectableHUDMoveRotatorComponent"));
    this->DoorwayIndex = 0;
    this->Doorway = NULL;
    this->KeyringHUDComponentClass = NULL;
    this->CollectedForceFeedbackEvent = NULL;
    this->CollectedHapticsEvent = NULL;
    this->CollectedGamepadAudio = NULL;
    this->CollectedAudioEvent = NULL;
    this->CollectedParticles = NULL;
    this->CollectedCameraEffect = NULL;
    this->AkComponent->SetupAttachment(StaticMeshComponent);
    this->PointLightComponent->SetupAttachment(StaticMeshComponent);
    this->SpotShadowComponent->SetupAttachment(StaticMeshComponent);
    this->ParticleSystemComponent->SetupAttachment(StaticMeshComponent);
    this->PoIComponent->SetupAttachment(StaticMeshComponent);
}

void AExplorationKey::OnCollectableSpinMotionComplete(UCollectablePickupMoverComponent* pComponent, FVector KeyLocation, FVector KeyPreviousLocation) {
}

void AExplorationKey::OnCollectableHUDMotionLooksComplete() {
}

void AExplorationKey::OnCollectableHUDMotionComplete(UCollectableHUDMoverComponent* pComponent) {
}


