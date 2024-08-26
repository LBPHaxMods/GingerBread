#pragma once
#include "CoreMinimal.h"
#include "EGingerbreadMatchStatus.generated.h"

UENUM(BlueprintType)
enum class EGingerbreadMatchStatus : uint8 {
    None,
    OnHold,
    Playing,
    Cancelled,
    Completed,
};

