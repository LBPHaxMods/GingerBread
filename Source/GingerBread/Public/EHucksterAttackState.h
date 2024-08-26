#pragma once
#include "CoreMinimal.h"
#include "EHucksterAttackState.generated.h"

UENUM(BlueprintType)
enum class EHucksterAttackState : uint8 {
    Invalid,
    Aiming,
    Throwing,
    NumStates,
};

