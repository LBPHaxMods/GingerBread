#pragma once
#include "CoreMinimal.h"
#include "EGruntyTurnOnSpotState.generated.h"

UENUM(BlueprintType)
enum class EGruntyTurnOnSpotState : uint8 {
    Invalid,
    LeftTurn,
    RightTurn,
    NumStates,
};

