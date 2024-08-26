#pragma once
#include "CoreMinimal.h"
#include "EBabyProogleFlippedState.generated.h"

UENUM(BlueprintType)
enum class EBabyProogleFlippedState : uint8 {
    Invalid,
    FlippedStart,
    FlippedRecover,
    NumStates,
};

