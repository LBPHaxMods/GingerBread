#pragma once
#include "CoreMinimal.h"
#include "EBabyProogleStandingState.generated.h"

UENUM(BlueprintType)
enum class EBabyProogleStandingState : uint8 {
    Invalid,
    Stopped,
    Walking,
    LookingAround,
    TurnOnSpotLeft,
    TurnOnSpotRight,
    NumStates,
};

