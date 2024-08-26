#pragma once
#include "CoreMinimal.h"
#include "EMeanieArenaRingMovementState.generated.h"

UENUM(BlueprintType)
enum class EMeanieArenaRingMovementState : uint8 {
    NotSpinning,
    Spinning,
};

