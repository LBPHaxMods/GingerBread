#pragma once
#include "CoreMinimal.h"
#include "ESniperRunAwayType.generated.h"

UENUM(BlueprintType)
enum class ESniperRunAwayType : uint8 {
    Invalid,
    Normal,
    AirDash,
    BoostBackToFloor,
};

