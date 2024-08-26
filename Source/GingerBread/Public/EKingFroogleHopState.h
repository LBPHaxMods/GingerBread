#pragma once
#include "CoreMinimal.h"
#include "EKingFroogleHopState.generated.h"

UENUM(BlueprintType)
enum class EKingFroogleHopState : uint8 {
    Invalid,
    HopPrepare,
    HopStart,
    HopLand,
    NumStates,
};

