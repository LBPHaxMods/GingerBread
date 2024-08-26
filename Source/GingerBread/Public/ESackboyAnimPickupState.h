#pragma once
#include "CoreMinimal.h"
#include "ESackboyAnimPickupState.generated.h"

UENUM(BlueprintType)
enum class ESackboyAnimPickupState : uint8 {
    Pickup,
    PickupGlue,
    PickupFail,
    RangedPickup,
};

