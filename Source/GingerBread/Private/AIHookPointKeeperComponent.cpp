#include "AIHookPointKeeperComponent.h"

UAIHookPointKeeperComponent::UAIHookPointKeeperComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DesiredHookPointDistance = 10.00f;
    this->CanSnapToTargetLocation = false;
    this->SnapToTargetAcceptanceRadius = 5.00f;
}

bool UAIHookPointKeeperComponent::TryUnregisterHookPoint() {
    return false;
}

bool UAIHookPointKeeperComponent::TryRegisterHookPoint(AActor* hookPointActor, bool RequireClosestHP) {
    return false;
}

bool UAIHookPointKeeperComponent::GetHookpointLocation(FVector& OutLocation, bool NavmeshProjectHookpoint) {
    return false;
}


