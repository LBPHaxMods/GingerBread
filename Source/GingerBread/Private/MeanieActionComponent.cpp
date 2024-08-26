#include "MeanieActionComponent.h"

UMeanieActionComponent::UMeanieActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionTable.AddDefaulted(15);
}


