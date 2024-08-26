#pragma once
#include "CoreMinimal.h"
#include "EVexConveyorLegacyGrillMode.generated.h"

UENUM(BlueprintType)
enum class EVexConveyorLegacyGrillMode : uint8 {
    Invalid,
    Left,
    Right,
};

