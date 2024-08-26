#include "AIThrownComponent.h"

UAIThrownComponent::UAIThrownComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinimumTraversalTime = 0.20f;
    this->GroundedPredictAheadTime = 0.00f;
    this->LandingTime = 0.00f;
    this->RecoveryTime = 0.00f;
    this->DroppedAnimAction = TEXT("DroppedFalling");
    this->DroppedRecoveryAnimAction = TEXT("DroppedLanding");
    this->DroppedRecoveryTime = 0.50f;
    this->ThrownLandVFX = NULL;
    this->ShockwaveScale = 1.10f;
}

void UAIThrownComponent::TryDoLandingVFX_Implementation() {
}

void UAIThrownComponent::OnOwnerCapsuleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


