#pragma once
#include "CoreMinimal.h"
#include "EHucksterDiggingState.generated.h"

UENUM(BlueprintType)
enum class EHucksterDiggingState : uint8 {
    Invalid,
    Burrowing,
    Moving,
    Emerging,
    EmergingHeavy,
    NumStates,
};

