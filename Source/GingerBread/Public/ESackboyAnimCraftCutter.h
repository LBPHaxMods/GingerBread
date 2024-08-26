#pragma once
#include "CoreMinimal.h"
#include "ESackboyAnimCraftCutter.generated.h"

UENUM(BlueprintType)
enum class ESackboyAnimCraftCutter : uint8 {
    Equip,
    Idle,
    Throw,
    Catch,
    Caught,
    Unequip,
    WindUp,
    None = 254,
};

