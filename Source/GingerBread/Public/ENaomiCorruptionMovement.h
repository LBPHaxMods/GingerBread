#pragma once
#include "CoreMinimal.h"
#include "ENaomiCorruptionMovement.generated.h"

UENUM(BlueprintType)
enum class ENaomiCorruptionMovement : uint8 {
    Invalid,
    Stationary,
    Moving,
    InBetweenMoves,
    NumStates,
};

