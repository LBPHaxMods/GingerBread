#pragma once
#include "CoreMinimal.h"
#include "ESackboyStruggleReleaseType.generated.h"

UENUM(BlueprintType)
enum class ESackboyStruggleReleaseType : uint8 {
    None,
    OnTimer,
    OnWiggle,
    OnEviction = 4,
    OnTimerOrWiggle = 3,
};

