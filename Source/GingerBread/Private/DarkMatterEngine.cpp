#include "DarkMatterEngine.h"

UDarkMatterEngine::UDarkMatterEngine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PrepareWorld = false;
    this->Enabled = false;
    this->UseMovementSpaceSwitching = true;
    this->CullDistance = 800.00f;
}

void UDarkMatterEngine::TransformVector(FVector& Vector, FVector& VectorOut) const {
}

void UDarkMatterEngine::TransformRotation(FRotator& Rotation, FRotator& RotationOut) const {
}

void UDarkMatterEngine::TransformPosition(FVector& Position, FVector& PositionOut) const {
}

void UDarkMatterEngine::SetWorldTransform(AActor* Actor, const FTransform& Transform) {
}

void UDarkMatterEngine::RemoveInfoFromUniverse(const FDarkMatterEngineInfo& movement_info) {
}

void UDarkMatterEngine::RemoveActorFromUniverse(AActor* Actor) {
}

void UDarkMatterEngine::RefreshActor(AActor* Actor) {
}

void UDarkMatterEngine::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UDarkMatterEngine::OnActorSpawned(AActor* Actor) {
}

void UDarkMatterEngine::IgnoreSceneComponent(USceneComponent* scene_component) {
}

void UDarkMatterEngine::IgnorePrimitiveComponent(UPrimitiveComponent* primitive_component) {
}

void UDarkMatterEngine::IgnoreActor(const AActor* Actor) {
}

void UDarkMatterEngine::GetWorldTransform(FTransform& Transform) const {
}

EDarkMatterEngineMovementSpace UDarkMatterEngine::GetMovementSpaceOfCollidingPrimitive(UPrimitiveComponent* Primitive) const {
    return EDarkMatterEngineMovementSpace::Universe;
}

EDarkMatterEngineMovementSpace UDarkMatterEngine::GetMovementSpace(USceneComponent* component) const {
    return EDarkMatterEngineMovementSpace::Universe;
}

UDarkMatterEngine* UDarkMatterEngine::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

void UDarkMatterEngine::EnableRelativeUpdate(AActor* Actor) {
}

void UDarkMatterEngine::AddInfoToUniverse(const FDarkMatterEngineInfo& movement_info, bool apply_initial_world_transform) {
}

void UDarkMatterEngine::AddIgnoredSceneComponent(const UObject* WorldContextObject, USceneComponent* scene_component) {
}

void UDarkMatterEngine::AddIgnoredPrimitiveComponent(const UObject* WorldContextObject, UPrimitiveComponent* primitive_component) {
}

void UDarkMatterEngine::AddIgnoredActor(const UObject* WorldContextObject, const AActor* Actor) {
}

void UDarkMatterEngine::AddActorToUniverse(AActor* Actor, bool apply_initial_world_transform) {
}


