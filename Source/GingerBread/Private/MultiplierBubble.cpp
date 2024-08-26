#include "MultiplierBubble.h"
#include "AkComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CollectableFaceScreenMoverComponent.h"
#include "CollectableHUDMoverComponent.h"
#include "CollectablePickupMoverComponent.h"
#include "SpotShadowComponent.h"

AMultiplierBubble::AMultiplierBubble(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkCollected SFX Component"));
    this->CollectedForceFeedbackEffect = NULL;
    this->CollectedGamepadAudioEvent = NULL;
    this->CollectedHapticsEvent = NULL;
    this->CollectedAudioEvent = NULL;
    this->SwirlySmokeComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Swirly Smoke VFX Component"));
    this->IdleEffectComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Idle Effect VFX Component"));
    this->PickupEffect = NULL;
    this->CameraEffect = NULL;
    this->SphereComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere Component"));
    this->SpotShadowComponent = CreateDefaultSubobject<USpotShadowComponent>(TEXT("Spot Shadow Component"));
    this->CollectableFaceScreenMover = CreateDefaultSubobject<UCollectableFaceScreenMoverComponent>(TEXT("Collectable Face Screen Mover Component"));
    this->CollectableHUDMover = CreateDefaultSubobject<UCollectableHUDMoverComponent>(TEXT("Collectable HUD Mover Component"));
    this->CollectablePickupMover = CreateDefaultSubobject<UCollectablePickupMoverComponent>(TEXT("Collectable Pickup Mover Component"));
    this->SwirlySmokeComponent->SetupAttachment(RootComponent);
    this->IdleEffectComponent->SetupAttachment(RootComponent);
    this->SphereComponent->SetupAttachment(StaticMeshComponent);
    this->SpotShadowComponent->SetupAttachment(StaticMeshComponent);
}

void AMultiplierBubble::RunHUDMovementLogic() {
}

void AMultiplierBubble::OnOrbMovementEnded(UCollectableHUDMoverComponent* mover) {
}

void AMultiplierBubble::OnCollectableHUDMotionLooksComplete() {
}


