#pragma once
#include "CoreMinimal.h"
#include "PickupContainerOpenedDelegate.generated.h"

class UPickupContainerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPickupContainerOpened, UPickupContainerComponent*, PickupContainer, bool, HasConditionSucceeded, int32, PickupsToSpawn);

