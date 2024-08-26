#pragma once
#include "CoreMinimal.h"
#include "PickupContainerVoidEnergySpawnedDelegate.generated.h"

class AVoidEnergy;
class UPickupContainerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPickupContainerVoidEnergySpawned, UPickupContainerComponent*, PickupContainer, AVoidEnergy*, VoidEnergy);

