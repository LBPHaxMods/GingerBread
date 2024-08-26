#pragma once
#include "CoreMinimal.h"
#include "EBabyProogleHopState.generated.h"

UENUM(BlueprintType)
enum class EBabyProogleHopState : uint8 {
    Invalid,
    Preparing,
    PreparingStatic,
    Jumping,
    InFlight,
    Landing,
    LandingOnAI,
    SmallHopInto,
    SmallHopping,
    SmallHopLanding,
    HitSomething,
    NumStates,
};

