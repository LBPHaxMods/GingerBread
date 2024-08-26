#pragma once
#include "CoreMinimal.h"
#include "ESackboyPOIType.generated.h"

UENUM(BlueprintType)
enum class ESackboyPOIType : uint8 {
    None,
    GrappleHook,
    CraftCutter,
    Blasters,
    ActingMode,
};

