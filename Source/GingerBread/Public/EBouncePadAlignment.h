#pragma once
#include "CoreMinimal.h"
#include "EBouncePadAlignment.generated.h"

UENUM(BlueprintType)
enum class EBouncePadAlignment : uint8 {
    BouncingVertically,
    BouncingHorizontally,
    Bouncing45Degrees,
    Bouncing15Degrees,
    Bouncing25Degrees,
    Bouncing30Degrees,
    Bouncing60Degrees,
    Bouncing75Degrees,
    BouncingUnlmited,
};

