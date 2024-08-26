#pragma once
#include "CoreMinimal.h"
#include "EWaterTableDirection.generated.h"

UENUM(BlueprintType)
enum class EWaterTableDirection : uint8 {
    Rising,
    Falling,
    Any,
    None,
};

