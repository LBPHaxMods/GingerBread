#include "TrackableSecretComponent.h"

UTrackableSecretComponent::UTrackableSecretComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DetectionWeighting = 1.00f;
    this->DetectionSphereRadius = 150.00f;
    this->IsTrackable = true;
    this->DestroyIfFound = false;
    this->DetectionSphere = NULL;
}

void UTrackableSecretComponent::SetIsTrackable(bool InTrackable) {
}

void UTrackableSecretComponent::OnEndOverlap(UPrimitiveComponent* thisComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void UTrackableSecretComponent::OnBeginOverlap(UPrimitiveComponent* thisComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void UTrackableSecretComponent::MarkFound(bool bDestroyComponent) {
}

FName UTrackableSecretComponent::GetSecretID() const {
    return NAME_None;
}

bool UTrackableSecretComponent::GetIsTrackable() const {
    return false;
}


