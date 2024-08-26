#pragma once
#include "CoreMinimal.h"
#include "EPickupContainerState.generated.h"

UENUM(BlueprintType)
enum class EPickupContainerState : uint8 {
    Idle,
    Spawning,
    Finished,
};

