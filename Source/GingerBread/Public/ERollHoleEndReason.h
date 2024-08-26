#pragma once
#include "CoreMinimal.h"
#include "ERollHoleEndReason.generated.h"

UENUM(BlueprintType)
enum class ERollHoleEndReason : uint8 {
    RollComplete,
    SackboyDied,
    Unknown,
};

