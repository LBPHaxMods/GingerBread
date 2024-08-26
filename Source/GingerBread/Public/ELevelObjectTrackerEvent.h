#pragma once
#include "CoreMinimal.h"
#include "ELevelObjectTrackerEvent.generated.h"

UENUM(BlueprintType)
enum class ELevelObjectTrackerEvent : uint8 {
    DestroyedHitPoints,
    SlapBoltUnscrewed,
};

