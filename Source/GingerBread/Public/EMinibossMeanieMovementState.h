#pragma once
#include "CoreMinimal.h"
#include "EMinibossMeanieMovementState.generated.h"

UENUM(BlueprintType)
enum class EMinibossMeanieMovementState : uint8 {
    Invalid,
    Walk,
    Run,
};

