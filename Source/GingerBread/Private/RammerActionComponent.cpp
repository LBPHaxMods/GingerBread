#include "RammerActionComponent.h"

URammerActionComponent::URammerActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionTable.AddDefaulted(44);
}


