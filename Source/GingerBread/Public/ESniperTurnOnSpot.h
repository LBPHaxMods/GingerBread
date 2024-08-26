#pragma once
#include "CoreMinimal.h"
#include "ESniperTurnOnSpot.generated.h"

UENUM(BlueprintType)
enum class ESniperTurnOnSpot : uint8 {
    Invalid,
    LeftTurnOnSpot,
    RightTurnOnSpot,
    NumStates,
};

