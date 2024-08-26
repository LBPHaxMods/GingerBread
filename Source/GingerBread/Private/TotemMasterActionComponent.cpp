#include "TotemMasterActionComponent.h"

UTotemMasterActionComponent::UTotemMasterActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionTable.AddDefaulted(10);
}


