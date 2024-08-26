#include "VexActionComponent.h"

UVexActionComponent::UVexActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionTable.AddDefaulted(20);
}


