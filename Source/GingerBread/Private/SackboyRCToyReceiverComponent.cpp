#include "SackboyRCToyReceiverComponent.h"

USackboyRCToyReceiverComponent::USackboyRCToyReceiverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tag = TEXT("SackboyRCToyReceiver");
    this->bFocusPointEnabled = true;
}

void USackboyRCToyReceiverComponent::OnSackboyControlStop(ASackboy* Sackboy) {
}

void USackboyRCToyReceiverComponent::OnSackboyControlStart(ASackboy* Sackboy) {
}

void USackboyRCToyReceiverComponent::OnSackboyControlInput(ASackboy* Sackboy, FVector stick_input, bool actionA, bool actionB) {
}

void USackboyRCToyReceiverComponent::OnCameraManagerAvailable(AActor* ManagerActor) {
}

ASackboy* USackboyRCToyReceiverComponent::GetSackboy() const {
    return NULL;
}

FVector USackboyRCToyReceiverComponent::GetGravityVector() const {
    return FVector{};
}


