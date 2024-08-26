#include "SackboyThrewMeComponent.h"

USackboyThrewMeComponent::USackboyThrewMeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tag = TEXT("SackboyThrewMe");
}

ASackboy* USackboyThrewMeComponent::WhoThrewMe() const {
    return NULL;
}

void USackboyThrewMeComponent::OnPrimitiveSleeping(UPrimitiveComponent* SelfComponent, FName BoneName) {
}

void USackboyThrewMeComponent::OnParentHit(AActor* SelfActor, UPrimitiveComponent* SelfComponent, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

UPrimitiveComponent* USackboyThrewMeComponent::GetPrimitive() const {
    return NULL;
}


