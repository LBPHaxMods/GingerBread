#pragma once
#include "CoreMinimal.h"
#include "EHucksterGenericState.generated.h"

UENUM(BlueprintType)
enum class EHucksterGenericState : uint8 {
    Invalid,
    Idle,
    Alert,
    Celebrating,
    Dead,
    Attacking,
    Digging,
    LostTarget,
    Watching,
    NumStates,
};

