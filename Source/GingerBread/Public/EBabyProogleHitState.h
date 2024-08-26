#pragma once
#include "CoreMinimal.h"
#include "EBabyProogleHitState.generated.h"

UENUM(BlueprintType)
enum class EBabyProogleHitState : uint8 {
    Invalid,
    Slapped,
    SlappedLanding,
    Stomped,
    Dazed,
    NumStates,
};

