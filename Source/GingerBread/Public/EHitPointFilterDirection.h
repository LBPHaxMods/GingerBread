#pragma once
#include "CoreMinimal.h"
#include "EHitPointFilterDirection.generated.h"

UENUM(BlueprintType)
enum class EHitPointFilterDirection : uint8 {
    Forwards,
    Backwards,
    Up,
    Down,
    Right,
    Left,
};

