#pragma once
#include "CoreMinimal.h"
#include "ESackboyFallType.generated.h"

UENUM(BlueprintType)
enum class ESackboyFallType : uint8 {
    Normal,
    BouncePad,
    Hovering,
    BouncedOnEnemy,
    BouncedOnWobbleBlob,
    BouncedOnSackboy,
    BouncedOnInAirSackboy,
    CarryingItem,
    SackboyBouncedOnMyHead,
    SpatOut,
    FromFlutter,
    FallThroughSupport,
    LeapFrogBounce,
    ExittingUnicycle,
};

