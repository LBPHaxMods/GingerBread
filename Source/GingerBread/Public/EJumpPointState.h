#pragma once
#include "CoreMinimal.h"
#include "EJumpPointState.generated.h"

UENUM(BlueprintType)
enum class EJumpPointState : uint8 {
    Free,
    Occupied,
    Invalid,
};

