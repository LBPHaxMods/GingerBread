#pragma once
#include "CoreMinimal.h"
#include "ERammerIdleState.generated.h"

UENUM(BlueprintType)
enum class ERammerIdleState : uint8 {
    Invalid,
    Idle,
    PatrolPaused,
    Walking,
    HopAndTurn,
    IdleToAlert,
    AlertToIdle,
    NumStates,
};

