#include "ProogleStaticAnticipateComponent.h"

UProogleStaticAnticipateComponent::UProogleStaticAnticipateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TurnSpeed = 360.00f;
    this->AnimDelay = 0.90f;
    this->AnticipationAnimAction = TEXT("StaticAnticipateAnim");
}


