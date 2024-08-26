#include "StompyActionComponent.h"

UStompyActionComponent::UStompyActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionTable.AddDefaulted(27);
}


