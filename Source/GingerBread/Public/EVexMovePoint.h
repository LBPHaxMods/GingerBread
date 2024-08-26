#pragma once
#include "CoreMinimal.h"
#include "EVexMovePoint.generated.h"

UENUM(BlueprintType)
enum class EVexMovePoint : uint8 {
    Invalid,
    Centre,
    Left,
    Right,
};

