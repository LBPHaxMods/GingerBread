#include "Corridor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "InteractionComponent.h"

ACorridor::ACorridor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));

    this->SceneRoot = (USceneComponent*)RootComponent;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->BoxInteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("BoxInteractionComponent"));
    this->CorridorWidth = 20.00f;
    this->SpringPush = 1.25f;
    this->SpringDrag = 0.02f;
    this->InAirMultiplier = 0.25f;
    this->RestrictionDirection = ECorridorRestrictionDirection::BothDirections;
    this->BreakoutDirection = ECorridorBreakoutDirection::NoBreakout;
    this->BoxComponent->SetupAttachment(RootComponent);
    this->BoxInteractionComponent->SetupAttachment(RootComponent);
}


