#include "ActorThrownComponent.h"

UActorThrownComponent::UActorThrownComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tag = TEXT("ActorThrewMe");
}

AActor* UActorThrownComponent::WhoThrewMe() const {
    return NULL;
}

void UActorThrownComponent::OnPrimitiveSleeping(UPrimitiveComponent* SelfComponent, FName BoneName) {
}

void UActorThrownComponent::OnParentHit(AActor* SelfActor, UPrimitiveComponent* SelfComponent, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

float UActorThrownComponent::GetTimeSinceThrown() const {
    return 0.0f;
}

UPrimitiveComponent* UActorThrownComponent::GetPrimitive() const {
    return NULL;
}


