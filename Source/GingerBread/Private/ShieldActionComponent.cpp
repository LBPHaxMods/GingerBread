#include "ShieldActionComponent.h"

UShieldActionComponent::UShieldActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionTable.AddDefaulted(7);
}


