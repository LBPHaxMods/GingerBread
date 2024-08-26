#pragma once
#include "CoreMinimal.h"
#include "ESackboyDetection.generated.h"

UENUM(BlueprintType)
enum class ESackboyDetection : uint8 {
    Standing,
    Pushing,
    Grabbing,
    LedgeGrabbing,
    PickedUp,
    Dropped,
    RolledInto,
    Collided,
    Slapped,
    RollLanded,
    Shoved,
    Landed,
    Pulling,
};

