#include "PopshotTailComponent.h"
#include "Net/UnrealNetwork.h"

UPopshotTailComponent::UPopshotTailComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PopshotTailClass = NULL;
    this->CurrentTail = NULL;
}

void UPopshotTailComponent::TailStateChanged_Implementation(EPopshotTailState NewState) {
}

void UPopshotTailComponent::TailOverPulled(ASackboy* Sackboy) {
}

void UPopshotTailComponent::SpawnTail() {
}

void UPopshotTailComponent::SetTailGrabbable(bool isGrabbable) {
}

void UPopshotTailComponent::SetTailEnabled(bool IsEnabled) {
}

void UPopshotTailComponent::MakeSocketDriven() {
}

bool UPopshotTailComponent::IsGrabbed() const {
    return false;
}

float UPopshotTailComponent::GetTailPulledPercentage() const {
    return 0.0f;
}

void UPopshotTailComponent::DestroyTail() {
}

void UPopshotTailComponent::CurrentTail_RepInit() {
}

void UPopshotTailComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPopshotTailComponent, CurrentTail);
    DOREPLIFETIME(UPopshotTailComponent, Rep_TailPosition);
}


