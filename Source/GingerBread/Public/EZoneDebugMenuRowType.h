#pragma once
#include "CoreMinimal.h"
#include "EZoneDebugMenuRowType.generated.h"

UENUM(BlueprintType)
enum class EZoneDebugMenuRowType : uint8 {
    Header,
    EmptyPadding,
    UnlockZone,
    UnlockZoneLevels,
    Count,
};

