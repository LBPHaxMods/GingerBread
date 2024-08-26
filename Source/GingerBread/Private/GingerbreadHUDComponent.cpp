#include "GingerbreadHUDComponent.h"
#include "Templates/SubclassOf.h"

UGingerbreadHUDComponent::UGingerbreadHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Desired3DHudActor = NULL;
    this->DisallowLayeringOnTop = false;
    this->Screen = NULL;
    this->MyWidget = NULL;
    this->My3DActor = NULL;
    this->TickRefCount = 0;
    this->TicksWhenPaused = false;
    this->SelfSetsOwnedWidget = false;
}

void UGingerbreadHUDComponent::SetWidgetNameInMainHUD(FName widgetName) {
}

void UGingerbreadHUDComponent::SetIsAmbientMovementEnabled(bool IsEnabled) {
}

void UGingerbreadHUDComponent::SetIfSelfSetsOwnedWidget(bool SelfSets) {
}

void UGingerbreadHUDComponent::SetDisallowLayering(bool Disallowed) {
}






bool UGingerbreadHUDComponent::IsLayeredUpon() const {
    return false;
}

bool UGingerbreadHUDComponent::IsInTopScreen() const {
    return false;
}

bool UGingerbreadHUDComponent::IsHudTickEnabled() const {
    return false;
}

bool UGingerbreadHUDComponent::HasTopScreen() const {
    return false;
}

UGingerbreadWidget* UGingerbreadHUDComponent::GetWidget() const {
    return NULL;
}

bool UGingerbreadHUDComponent::GetTicksWhenPaused() const {
    return false;
}

UGingerbreadScreen* UGingerbreadHUDComponent::GetScreen() const {
    return NULL;
}

bool UGingerbreadHUDComponent::GetIsAmbientMovementEnabled() const {
    return false;
}

AGingerbreadHUD* UGingerbreadHUDComponent::GetHUD() const {
    return NULL;
}

TSubclassOf<AHudActor3D> UGingerbreadHUDComponent::GetDesired3DHudActorClass() const {
    return NULL;
}

AHudActor3D* UGingerbreadHUDComponent::Get3DHudActor() const {
    return NULL;
}

void UGingerbreadHUDComponent::EnableHUDTick(bool bTick) {
}

bool UGingerbreadHUDComponent::DisallowsLayering() const {
    return false;
}



