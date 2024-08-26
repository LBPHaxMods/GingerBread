#pragma once
#include "CoreMinimal.h"
#include "TEAInputType.generated.h"

UENUM(BlueprintType)
enum class TEAInputType : uint8 {
    Active,
    KeyboardMouse,
    Gamepad,
    Max,
};

