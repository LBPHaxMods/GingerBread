#pragma once
#include "CoreMinimal.h"
#include "EVexFinalRevealingState.generated.h"

UENUM(BlueprintType)
enum class EVexFinalRevealingState : uint8 {
    Invalid,
    NormalReveal,
    StunnedReveal,
};

