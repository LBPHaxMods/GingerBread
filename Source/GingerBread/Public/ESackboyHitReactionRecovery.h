#pragma once
#include "CoreMinimal.h"
#include "ESackboyHitReactionRecovery.generated.h"

UENUM(BlueprintType)
enum class ESackboyHitReactionRecovery : uint8 {
    LargeRoll,
    NoRecovery,
    UnFlatten,
    Limit,
};

