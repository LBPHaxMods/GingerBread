#include "LevelDebugMenuComponent.h"

ULevelDebugMenuComponent::ULevelDebugMenuComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPushDeferredControlSchemes = false;
}

void ULevelDebugMenuComponent::OnEndDebugOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ULevelDebugMenuComponent::OnBeginDebugOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


