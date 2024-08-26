#pragma once
#include "CoreMinimal.h"
#include "PickupContainerAllPickupsSpawnedDelegate.generated.h"

class AActor;
class UPickupContainerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPickupContainerAllPickupsSpawned, UPickupContainerComponent*, PickupContainer, TArray<AActor*>, SpawnedPickups);

