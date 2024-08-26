#include "GruntyActionComponent.h"

UGruntyActionComponent::UGruntyActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionTable.AddDefaulted(31);
}


