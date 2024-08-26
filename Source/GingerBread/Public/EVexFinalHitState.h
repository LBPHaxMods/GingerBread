#pragma once
#include "CoreMinimal.h"
#include "EVexFinalHitState.generated.h"

UENUM(BlueprintType)
enum class EVexFinalHitState : uint8 {
    Invalid,
    Normal,
    HitByBomb,
    HitStunned,
};

