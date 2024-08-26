#pragma once
#include "CoreMinimal.h"
#include "EMusicOverride.generated.h"

UENUM(BlueprintType)
enum class EMusicOverride : uint8 {
    Ignore,
    TurnOn,
    TurnOff,
};

