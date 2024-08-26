#pragma once
#include "CoreMinimal.h"
#include "EPlatapushVexedState.generated.h"

UENUM(BlueprintType)
enum class EPlatapushVexedState : uint8 {
    IN_IDLE,
    PUSH,
    OUT_IDLE,
    RETRACTION,
};

