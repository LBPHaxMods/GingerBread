#pragma once
#include "CoreMinimal.h"
#include "EZoneState.generated.h"

UENUM(BlueprintType)
enum class EZoneState : uint8 {
    Locked,
    Unlocked,
    Count,
};

