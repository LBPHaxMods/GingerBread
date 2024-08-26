#pragma once
#include "CoreMinimal.h"
#include "EPickupContainerOverrideContent.generated.h"

UENUM(BlueprintType)
enum class EPickupContainerOverrideContent : uint8 {
    NoOverride,
    SlapFish,
    Paintbrush,
    Umbrella,
    BubbleBlower,
    PogoStick,
    Unicycle,
};

