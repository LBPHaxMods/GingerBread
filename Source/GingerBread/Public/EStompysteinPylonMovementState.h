#pragma once
#include "CoreMinimal.h"
#include "EStompysteinPylonMovementState.generated.h"

UENUM(BlueprintType)
enum class EStompysteinPylonMovementState : uint8 {
    NotSpinning,
    SpinningOneWay,
    SpinningTwoWaysForwardsFromStill,
    SpinningTwoWaysForwardsFromReversed,
    SpinningTwoWaysReversed,
};

