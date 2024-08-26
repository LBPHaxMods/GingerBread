#include "PhaseObjectComponent.h"

UPhaseObjectComponent::UPhaseObjectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhaseObjectPrimitive = NULL;
    this->IsInLight = true;
}

void UPhaseObjectComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UPhaseObjectComponent::OnEndInteractOverlap(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void UPhaseObjectComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UPhaseObjectComponent::OnBeginInteractOverlap(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}


