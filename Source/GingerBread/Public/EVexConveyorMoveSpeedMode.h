#pragma once
#include "CoreMinimal.h"
#include "EVexConveyorMoveSpeedMode.generated.h"

UENUM(BlueprintType)
enum class EVexConveyorMoveSpeedMode : uint8 {
    Invalid,
    ZeroSpeed,
    NearlyZeroSpeed,
    NormalSpeed,
    FastSpeed,
};

