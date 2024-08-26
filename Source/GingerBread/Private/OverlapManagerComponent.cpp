#include "OverlapManagerComponent.h"

UOverlapManagerComponent::UOverlapManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InvertFilter = false;
}

void UOverlapManagerComponent::RemoveManagedInteractionComponent(UInteractionComponent* InteractionComponent) {
}

void UOverlapManagerComponent::RemoveManagedComponents(const TArray<UPrimitiveComponent*>& PrimitiveComponents) {
}

void UOverlapManagerComponent::RemoveManagedComponent(UPrimitiveComponent* PrimitiveComponent) {
}

void UOverlapManagerComponent::RemoveAllManagedComponents() {
}

void UOverlapManagerComponent::OnManagedComponentEndOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void UOverlapManagerComponent::OnManagedComponentEndInteraction(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void UOverlapManagerComponent::OnManagedComponentBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult) {
}

void UOverlapManagerComponent::OnManagedComponentBeginInteraction(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

bool UOverlapManagerComponent::IsSackboyOverlappingAnyComponents(ASackboy* Sackboy) const {
    return false;
}

bool UOverlapManagerComponent::IsActorOverlappingAnyComponents(AActor* Actor) const {
    return false;
}

void UOverlapManagerComponent::GetSackboysOverlappingComponent(UPrimitiveComponent* ManagedComponent, TArray<ASackboy*>& SackboysOverlappingComponent) const {
}

void UOverlapManagerComponent::GetOverlappingSackboys(TArray<ASackboy*>& OverlappingSackboys, bool IncludeDeadSackboys) const {
}

void UOverlapManagerComponent::GetOverlappingActors(TArray<AActor*>& OverlappingActors) const {
}

int32 UOverlapManagerComponent::GetNumberOfOverlappingSackboys() const {
    return 0;
}

int32 UOverlapManagerComponent::GetNumberOfOverlappingActors() const {
    return 0;
}

void UOverlapManagerComponent::GetComponentsOverlappingSackboy(ASackboy* Sackboy, TArray<UPrimitiveComponent*>& ComponentsOverlappingSackboy) const {
}

void UOverlapManagerComponent::GetComponentsOverlappingActor(AActor* Actor, TArray<UPrimitiveComponent*>& ComponentsOverlappingActor) const {
}

void UOverlapManagerComponent::GetActorsOverlappingComponent(UPrimitiveComponent* ManagedComponent, TArray<AActor*>& ActorsOverlappingComponent) const {
}

void UOverlapManagerComponent::AddManagedInteractionComponent(UInteractionComponent* InteractionComponent) {
}

void UOverlapManagerComponent::AddManagedComponents(const TArray<UPrimitiveComponent*>& PrimitiveComponents) {
}

void UOverlapManagerComponent::AddManagedComponent(UPrimitiveComponent* PrimitiveComponent) {
}


