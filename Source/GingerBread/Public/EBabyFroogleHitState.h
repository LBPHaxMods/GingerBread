#pragma once
#include "CoreMinimal.h"
#include "EBabyFroogleHitState.generated.h"

UENUM(BlueprintType)
enum class EBabyFroogleHitState : uint8 {
    Invalid,
    Slapped,
    Stomped,
    NumStates,
};

