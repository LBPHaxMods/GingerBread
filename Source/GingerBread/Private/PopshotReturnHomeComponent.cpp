#include "PopshotReturnHomeComponent.h"

UPopshotReturnHomeComponent::UPopshotReturnHomeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxAcceptDistFromHome = 0.00f;
    this->ReturnHomeAcceptanceRadius = 0.00f;
    this->ReturnSpeed = 0.00f;
    this->ReturnRotationSpeed = 0.00f;
}


