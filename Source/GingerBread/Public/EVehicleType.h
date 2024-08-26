#pragma once
#include "CoreMinimal.h"
#include "EVehicleType.generated.h"

UENUM(BlueprintType)
enum class EVehicleType : uint8 {
    Seated,
    Skateboard,
    Snowball,
    PogoStick,
};

