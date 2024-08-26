#pragma once
#include "CoreMinimal.h"
#include "PickupContainerPickupSpawnedDelegate.generated.h"

class AActor;
class UPickupContainerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPickupContainerPickupSpawned, UPickupContainerComponent*, PickupContainer, AActor*, SpawnedPickup, int32, SpawnedPickupIndex);

