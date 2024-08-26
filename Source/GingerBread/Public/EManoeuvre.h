#pragma once
#include "CoreMinimal.h"
#include "EManoeuvre.generated.h"

UENUM(BlueprintType)
enum class EManoeuvre : uint8 {
    None,
    Straight,
    Flip180,
    Up,
    Down,
    Right,
    Left,
    Roll180,
    Roll90Left,
    Roll90Right,
};

