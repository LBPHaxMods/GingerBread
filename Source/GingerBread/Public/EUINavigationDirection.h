#pragma once
#include "CoreMinimal.h"
#include "EUINavigationDirection.generated.h"

UENUM(BlueprintType)
enum class EUINavigationDirection : uint8 {
    NoDirection,
    Up,
    Down,
    Left,
    Right,
};

