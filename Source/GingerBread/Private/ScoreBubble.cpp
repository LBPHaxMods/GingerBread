#include "ScoreBubble.h"
#include "AttractionCollectableComponent.h"
#include "SpotShadowComponent.h"

AScoreBubble::AScoreBubble(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldDestroyOnCollected = false;
    this->SpotShadowComponent = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadowComponent"));
    this->AttractionCollectableComponent = CreateDefaultSubobject<UAttractionCollectableComponent>(TEXT("AttractionCollectableComponent"));

    this->CollectedAudioEvent = NULL;
    this->CollectedMultiplierActiveAudioEvent = NULL;
    this->CollectedMultiplierActiveGamepadAudioEvent = NULL;
    this->CollectedMultiplierActiveHapticEvent = NULL;
    this->CollectedParticleSystem = NULL;
    this->UsePulseBubbleMaterial = false;
    this->SpotShadowComponent->SetupAttachment(StaticMeshComponent);
}

void AScoreBubble::OnHit(AActor* SelfActor, UPrimitiveComponent* SelfComponent, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void AScoreBubble::OnCoolSystemAvailable(AActor* ManagerActor) {
}


