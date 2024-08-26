#pragma once
#include "CoreMinimal.h"
#include "PickupContainerMemoryOrbSpawnedDelegate.generated.h"

class AMemoryOrb;
class UPickupContainerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPickupContainerMemoryOrbSpawned, UPickupContainerComponent*, PickupContainer, AMemoryOrb*, MemoryOrb);

