#include "StompnadoActionComponent.h"

UStompnadoActionComponent::UStompnadoActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionTable.AddDefaulted(15);
}


