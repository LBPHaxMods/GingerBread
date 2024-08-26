#pragma once
#include "CoreMinimal.h"
#include "EGrapplePointType.generated.h"

UENUM(BlueprintType)
enum class EGrapplePointType : uint8 {
    None,
    RangedPickup,
    SwingAndTug,
};

