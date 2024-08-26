#pragma once
#include "CoreMinimal.h"
#include "ESlapElevatorState.generated.h"

UENUM(BlueprintType)
enum class ESlapElevatorState : uint8 {
    MovingUp,
    MovingDown,
    Idle,
};

