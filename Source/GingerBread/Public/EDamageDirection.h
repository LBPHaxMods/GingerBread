#pragma once
#include "CoreMinimal.h"
#include "EDamageDirection.generated.h"

UENUM(BlueprintType)
enum class EDamageDirection : uint8 {
    Forwards,
    Downwards,
    Upwards,
    Radial,
    Clockwise,
    Anitclockwise,
    Sideways,
};

