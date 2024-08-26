#pragma once
#include "CoreMinimal.h"
#include "EVexAdditiveAnimation.generated.h"

UENUM(BlueprintType)
enum class EVexAdditiveAnimation : uint8 {
    Invalid,
    IdleHit,
    NonIdleHit,
    NumStates,
};

