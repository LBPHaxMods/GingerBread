#pragma once
#include "CoreMinimal.h"
#include "EAIChargeState.generated.h"

UENUM(BlueprintType)
enum class EAIChargeState : uint8 {
    None,
    Warmup,
    Charging,
    HitTarget,
    HitStatic,
    Missed,
    Dazed,
    DazedRecovery,
};

