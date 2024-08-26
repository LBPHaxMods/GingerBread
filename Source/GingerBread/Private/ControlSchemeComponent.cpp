#include "ControlSchemeComponent.h"

UControlSchemeComponent::UControlSchemeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ControlScheme = NULL;
}


void UControlSchemeComponent::EnableControlScheme(AGingerbreadPlayerController* PlayerController, bool bEnable) {
}


