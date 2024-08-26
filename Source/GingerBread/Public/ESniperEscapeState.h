#pragma once
#include "CoreMinimal.h"
#include "ESniperEscapeState.generated.h"

UENUM(BlueprintType)
enum class ESniperEscapeState : uint8 {
    Invalid,
    IntoForward,
    IntoLeftTurn,
    IntoRightTurn,
    Loop,
    OutOf,
    NumStates,
};

