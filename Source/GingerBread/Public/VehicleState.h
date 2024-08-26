#pragma once
#include "CoreMinimal.h"
#include "VehicleState.generated.h"

UENUM(BlueprintType)
enum class VehicleState : uint8 {
    NONE,
    HEADSTOMP_PAUSE,
    HEADSTOMP_FALL,
    HEADSTOMP_BOUNCE,
};

