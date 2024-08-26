#include "ZoneDebugMenuComponent.h"

UZoneDebugMenuComponent::UZoneDebugMenuComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPushDeferredControlSchemes = false;
    this->bUnlockZone = false;
    this->bSetZoneLevelsPlayed = false;
}

void UZoneDebugMenuComponent::OnEndDebugOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UZoneDebugMenuComponent::OnBeginDebugOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


