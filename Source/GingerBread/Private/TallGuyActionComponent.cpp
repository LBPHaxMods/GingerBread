#include "TallGuyActionComponent.h"

UTallGuyActionComponent::UTallGuyActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionTable.AddDefaulted(8);
}


