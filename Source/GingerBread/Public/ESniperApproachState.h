#pragma once
#include "CoreMinimal.h"
#include "ESniperApproachState.generated.h"

UENUM(BlueprintType)
enum class ESniperApproachState : uint8 {
    Invalid,
    Into,
    Loop,
    OutOf,
    NumStates,
};

