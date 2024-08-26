#include "GlueCollectableComponent.h"
#include "Net/UnrealNetwork.h"

UGlueCollectableComponent::UGlueCollectableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GlueStaticMeshComponent = NULL;
    this->MinimumDetachmentVelocity = 50.00f;
    this->GlueStaticMesh = NULL;
    this->IsAttached = true;
}

void UGlueCollectableComponent::OnRep_IsAttached() {
}

void UGlueCollectableComponent::OnCollisionComponentHit(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

bool UGlueCollectableComponent::GetIsAttached() const {
    return false;
}

void UGlueCollectableComponent::DetachFromPhysicsHit(const FVector& HitVelocity) {
}

void UGlueCollectableComponent::Detach() {
}

void UGlueCollectableComponent::AttachToSurface() {
}

void UGlueCollectableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGlueCollectableComponent, IsAttached);
}


