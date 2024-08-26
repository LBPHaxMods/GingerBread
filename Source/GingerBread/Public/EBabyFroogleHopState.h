#pragma once
#include "CoreMinimal.h"
#include "EBabyFroogleHopState.generated.h"

UENUM(BlueprintType)
enum class EBabyFroogleHopState : uint8 {
    Invalid,
    Preparing,
    Jumping,
    InFlight,
    Landing,
    NumStates,
};

