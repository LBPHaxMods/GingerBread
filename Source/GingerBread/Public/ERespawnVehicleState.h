#pragma once
#include "CoreMinimal.h"
#include "ERespawnVehicleState.generated.h"

UENUM(BlueprintType)
enum class ERespawnVehicleState : uint8 {
    Uninitialized,
    TravellingToSackboy,
    CollectingSackboy,
    FollowingTarget,
    Exiting,
};

