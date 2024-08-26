#pragma once
#include "CoreMinimal.h"
#include "EBounceToEnterState.generated.h"

UENUM(BlueprintType)
enum class EBounceToEnterState : uint8 {
    Idle,
    Jumping,
    Entering,
    Entered,
};

