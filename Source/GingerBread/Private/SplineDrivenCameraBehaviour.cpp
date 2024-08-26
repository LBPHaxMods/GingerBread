#include "SplineDrivenCameraBehaviour.h"
#include "Net/UnrealNetwork.h"

USplineDrivenCameraBehaviour::USplineDrivenCameraBehaviour(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetDistance = 0.00f;
    this->bWantSetTargetPosition = false;
    this->bWantSnapToTargetPosition = false;
    this->CurrentDistanceAlongSpline = 0.00f;
}

void USplineDrivenCameraBehaviour::SnapToTargetLocation() {
}

void USplineDrivenCameraBehaviour::SetTargetLocation(const FVector& Location) {
}

void USplineDrivenCameraBehaviour::SetTargetDistance(float Distance) {
}

void USplineDrivenCameraBehaviour::OnRegistrarAvailable(AActor* ManagerActor) {
}

void USplineDrivenCameraBehaviour::OnPrepareToInstantSpawn(USpawnPointComponent* SpawnPoint) {
}

USplineComponent* USplineDrivenCameraBehaviour::GetSpline() const {
    return NULL;
}

float USplineDrivenCameraBehaviour::GetCurrentDistanceAlongSpline() const {
    return 0.0f;
}

void USplineDrivenCameraBehaviour::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USplineDrivenCameraBehaviour, TargetDistance);
}


