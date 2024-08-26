#pragma once
#include "CoreMinimal.h"
#include "ESackboyDetectionDetails.generated.h"

UENUM(BlueprintType)
enum class ESackboyDetectionDetails : uint8 {
    Standard,
    PickedUpByGrapple,
    GrabbedByGrapple,
    PulledByGrapple,
};

