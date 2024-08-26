#pragma once
#include "CoreMinimal.h"
#include "ERespawnVehicleType.generated.h"

UENUM(BlueprintType)
enum class ERespawnVehicleType : uint8 {
    Respawning,
    BeingAssisted,
    Removing,
    Invalid,
};

