#pragma once
#include "CoreMinimal.h"
#include "EControlMode.generated.h"

UENUM(BlueprintType)
enum class EControlMode : uint8 {
    None,
    Boomerang,
    PowerGloves,
    GrappleHook,
    Blasters,
    Count,
    Invalid,
};

