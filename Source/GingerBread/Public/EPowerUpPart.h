#pragma once
#include "CoreMinimal.h"
#include "EPowerUpPart.generated.h"

UENUM(BlueprintType)
enum class EPowerUpPart : uint8 {
    PowerUpPart_Hands,
    PowerUpPart_Feet,
    Count,
};

