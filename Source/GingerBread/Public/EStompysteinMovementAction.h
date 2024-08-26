#pragma once
#include "CoreMinimal.h"
#include "EStompysteinMovementAction.generated.h"

UENUM(BlueprintType)
enum class EStompysteinMovementAction : uint8 {
    NoMoving,
    TurningOnly,
    ChasingTarget,
    TurningTowardsCamera,
    MoveToCentre,
};

