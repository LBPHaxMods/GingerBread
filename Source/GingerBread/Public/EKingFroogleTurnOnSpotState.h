#pragma once
#include "CoreMinimal.h"
#include "EKingFroogleTurnOnSpotState.generated.h"

UENUM(BlueprintType)
enum class EKingFroogleTurnOnSpotState : uint8 {
    Invalid,
    LeftTurn,
    RightTurn,
    NumStates,
};

