#include "TriggerInteraction.h"
#include "InteractionComponent.h"

ATriggerInteraction::ATriggerInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("CollisionComp"));
    this->InteractionComponent = (UInteractionComponent*)RootComponent;
}


