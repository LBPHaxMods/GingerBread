#include "AISpawnComponent.h"

UAISpawnComponent::UAISpawnComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnFromGroundAnimTime = 0.00f;
    this->SpawnFromAirDelayBeforeLandAction = 0.00f;
    this->SpawnFromAirLandTime = 0.00f;
}

void UAISpawnComponent::OnActorHit(AActor* SelfActor, UPrimitiveComponent* SelfComponent, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}


