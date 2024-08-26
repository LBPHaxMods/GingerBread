#include "ProogleActionComponent.h"

UProogleActionComponent::UProogleActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionTable.AddDefaulted(56);
    this->ShouldBlockHitReaction = false;
}


