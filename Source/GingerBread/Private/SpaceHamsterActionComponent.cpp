#include "SpaceHamsterActionComponent.h"

USpaceHamsterActionComponent::USpaceHamsterActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionTable.AddDefaulted(6);
}


