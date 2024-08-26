#pragma once
#include "CoreMinimal.h"
#include "EPlatapushState_C.generated.h"

UENUM(BlueprintType)
enum class EPlatapushState_C : uint8 {
    IN_IDLE,
    TELL,
    PUSH,
    OUT_IDLE,
    LAUNCH,
    RETRACTION,
    COOLDOWN,
    SHAKEOFF,
};

