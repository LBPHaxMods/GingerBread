#include "StompysteinActionComponent.h"

UStompysteinActionComponent::UStompysteinActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionTable.AddDefaulted(12);
}


