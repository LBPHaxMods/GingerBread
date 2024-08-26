#pragma once
#include "CoreMinimal.h"
#include "EHitPointModifyAttemptOverride.generated.h"

UENUM(BlueprintType)
enum class EHitPointModifyAttemptOverride : uint8 {
    DoNotModify,
    Modified,
    Rejected,
};

