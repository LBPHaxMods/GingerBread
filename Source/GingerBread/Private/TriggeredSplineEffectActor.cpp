#include "TriggeredSplineEffectActor.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "InteractionComponent.h"
#include "TriggerActorComponent.h"

ATriggeredSplineEffectActor::ATriggeredSplineEffectActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->TriggerVolumeComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerVolumeComponent"));
    this->TriggerInteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("TriggerInteractionComponent"));
    this->SplineComponent1 = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent1"));
    this->ParticleSystemComponent1 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent1"));
    this->SplineComponent2 = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent2"));
    this->ParticleSystemComponent2 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent2"));
    this->SplineComponent3 = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent3"));
    this->ParticleSystemComponent3 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent3"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->ParticleSystem = NULL;
    this->NumberOfEffects = 1;
    this->Effect1TimeScale = 1.00f;
    this->Effect2TimeScale = 1.00f;
    this->Effect3TimeScale = 1.00f;
    this->EffectPositionCurve = NULL;
    this->ParticleSystemTriggerParameterValue = 0.00f;
    this->UseSplineInitialRotation = false;
    this->TriggerVolumeComponent->SetupAttachment(RootComponent);
    this->TriggerInteractionComponent->SetupAttachment(TriggerVolumeComponent);
    this->SplineComponent1->SetupAttachment(RootComponent);
    this->ParticleSystemComponent1->SetupAttachment(SplineComponent1);
    this->SplineComponent2->SetupAttachment(RootComponent);
    this->ParticleSystemComponent2->SetupAttachment(SplineComponent2);
    this->SplineComponent3->SetupAttachment(RootComponent);
    this->ParticleSystemComponent3->SetupAttachment(SplineComponent3);
}

void ATriggeredSplineEffectActor::EDITOR_CopyProperties(UParticleSystem* InParticleSystem, int32 InNumberOfEffects, float InEffect1TimeScale, float InEffect2TimeScale, float InEffect3TimeScale, UCurveFloat* InEffectPositionCurve, bool InUseSplineInitialRotation) {
}

void ATriggeredSplineEffectActor::EDITOR_CopyComponents(UBoxComponent* InTriggerVolumeComponent, USplineComponent* InSplineComponent1, USplineComponent* InSplineComponent2, USplineComponent* InSplineComponent3) {
}


