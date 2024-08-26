#pragma once
#include "CoreMinimal.h"
#include "ESnowballDamageType.generated.h"

UENUM(BlueprintType)
enum class ESnowballDamageType : uint8 {
    Disabled,
    Passive,
    Dash,
    Roll,
};

