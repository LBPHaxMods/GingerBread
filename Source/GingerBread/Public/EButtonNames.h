#pragma once
#include "CoreMinimal.h"
#include "EButtonNames.generated.h"

UENUM(BlueprintType)
enum class EButtonNames : uint8 {
    Cross,
    Triangle,
    Square,
    Circle,
    L1,
    L2,
    R1,
    R2,
    LeftStick,
    RightStick,
    TouchPad,
    Dpad,
    System,
    Options,
    DpadLeft,
    DpadRight,
    MAX,
};

