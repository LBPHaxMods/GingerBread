#pragma once
#include "CoreMinimal.h"
#include "EMeanieMovementState.generated.h"

UENUM(BlueprintType)
enum class EMeanieMovementState : uint8 {
    Invalid,
    Walk,
    Run,
};

