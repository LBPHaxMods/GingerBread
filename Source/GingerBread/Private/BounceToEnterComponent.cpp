#include "BounceToEnterComponent.h"
#include "Net/UnrealNetwork.h"

UBounceToEnterComponent::UBounceToEnterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameMode = NULL;
    this->LandingTrigger = NULL;
    this->LandingInteraction = NULL;
    this->AUTH_CurrentState = EBounceToEnterState::Idle;
}

void UBounceToEnterComponent::SetLandingTriggerVolume(UPrimitiveComponent* Trigger) {
}

void UBounceToEnterComponent::SetLandingInteractVolume(UInteractionComponent* Trigger) {
}

void UBounceToEnterComponent::SetFXCallback(FVector Position, float Radius, const FSackboyLandedEvent& SackboyCallback) {
}

void UBounceToEnterComponent::OnSackboyLeavingLevel(const FGingerbreadPlayerId& PlayerId, ASackboy* Sackboy) {
}

void UBounceToEnterComponent::OnRep_CurrentState() {
}

void UBounceToEnterComponent::OnNumberOfSackboysChanged(int32 Num) {
}

void UBounceToEnterComponent::OnAllSackboysBeginBounce_Implementation() {
}

bool UBounceToEnterComponent::HaveAllSackboysLandedOrEntered() const {
    return false;
}

void UBounceToEnterComponent::EnableSackboyOffscreenCheck(const bool bEnabled) {
}

void UBounceToEnterComponent::EnableSackboyOcclusionEffect(const bool bEnabled) {
}

void UBounceToEnterComponent::EnableSackboyInput(ASackboy* Sackboy, const bool bEnabled) {
}

void UBounceToEnterComponent::DetectSackboyLandedInteract(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void UBounceToEnterComponent::DetectSackboyLanded(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}





void UBounceToEnterComponent::BeginBounce(const FSackboyLandedEvent& SackboyLanded, const FFinalSackboyLandedEvent& FinalSackboyLanded, const FSackboyEnteredEvent& SackboyEntered, const FFinalSackboyEnteredEvent& FinalSackboyEntered) {
}

void UBounceToEnterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBounceToEnterComponent, AUTH_CurrentState);
}


