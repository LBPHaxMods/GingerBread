#pragma once
#include "CoreMinimal.h"
#include "EVexFinalTricksterState.generated.h"

UENUM(BlueprintType)
enum class EVexFinalTricksterState : uint8 {
    Hidden,
    Spawning,
    Trailing,
};

