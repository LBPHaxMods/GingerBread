#pragma once
#include "CoreMinimal.h"
#include "PickupContainerPrizeBubbleSpawnedDelegate.generated.h"

class APrizeBubble;
class UPickupContainerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPickupContainerPrizeBubbleSpawned, UPickupContainerComponent*, PickupContainer, APrizeBubble*, PrizeBubble);

