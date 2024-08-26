#pragma once
#include "CoreMinimal.h"
#include "EVoidSelectESportState.generated.h"

UENUM(BlueprintType)
enum class EVoidSelectESportState : uint8 {
    None,
    Countdown,
    Active,
    Disabled,
};

