#pragma once
#include "CoreMinimal.h"
#include "ESackboyAnimLedgeGrabState.generated.h"

UENUM(BlueprintType)
enum class ESackboyAnimLedgeGrabState : uint8 {
    Idle,
    PullUp,
    Invalid,
};

