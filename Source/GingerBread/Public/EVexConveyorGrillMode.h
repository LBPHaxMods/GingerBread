#pragma once
#include "CoreMinimal.h"
#include "EVexConveyorGrillMode.generated.h"

UENUM(BlueprintType)
enum class EVexConveyorGrillMode : uint8 {
    Invalid,
    Left,
    Right,
};

