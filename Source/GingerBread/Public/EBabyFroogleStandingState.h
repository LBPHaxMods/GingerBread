#pragma once
#include "CoreMinimal.h"
#include "EBabyFroogleStandingState.generated.h"

UENUM(BlueprintType)
enum class EBabyFroogleStandingState : uint8 {
    Invalid,
    Stopped,
    LookingAround,
    Rotating,
    NumStates,
};

