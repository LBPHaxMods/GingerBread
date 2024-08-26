#pragma once
#include "CoreMinimal.h"
#include "ESackboyAnimIntoIdleFromJumpLandState.generated.h"

UENUM(BlueprintType)
enum class ESackboyAnimIntoIdleFromJumpLandState : uint8 {
    Standard,
    Heavy,
    Carrying,
    Flagline,
};

