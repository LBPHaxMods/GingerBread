#pragma once
#include "CoreMinimal.h"
#include "ESackboyAnimSequenceType.generated.h"

UENUM(BlueprintType)
enum class ESackboyAnimSequenceType : uint8 {
    CraftCutter,
    GrappleHook,
    Blasters,
    PogoStick,
    Snowball,
    Count,
    Invalid,
};

