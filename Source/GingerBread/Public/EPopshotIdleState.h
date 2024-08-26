#pragma once
#include "CoreMinimal.h"
#include "EPopshotIdleState.generated.h"

UENUM(BlueprintType)
enum class EPopshotIdleState : uint8 {
    Invalid,
    Idle,
    LeftTurn,
    RightTurn,
    IntoAlert,
    IntoIdle,
    NumStates,
};

