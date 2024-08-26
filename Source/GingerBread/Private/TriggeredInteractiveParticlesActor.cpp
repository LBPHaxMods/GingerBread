#include "TriggeredInteractiveParticlesActor.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "InteractionComponent.h"
#include "TriggerActorComponent.h"

ATriggeredInteractiveParticlesActor::ATriggeredInteractiveParticlesActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->TriggerVolumeComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerVolumeComponent"));
    this->TriggerInteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("TriggerInteractionComponent"));
    this->ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->TriggerVolumeComponent->SetupAttachment(RootComponent);
    this->TriggerInteractionComponent->SetupAttachment(TriggerVolumeComponent);
    this->ParticleSystemComponent->SetupAttachment(RootComponent);
}

void ATriggeredInteractiveParticlesActor::OnParticleSystemFinished(UParticleSystemComponent* pParticleSystemComponent) {
}

void ATriggeredInteractiveParticlesActor::EDITOR_CopyComponents(UBoxComponent* InTriggerVolumeComponent, UParticleSystemComponent* InParticleSystemComponent) {
}


