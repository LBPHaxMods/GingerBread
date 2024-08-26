#pragma once
#include "CoreMinimal.h"
#include "TEAControllerType.generated.h"

UENUM(BlueprintType)
enum class TEAControllerType : uint8 {
    None,
    KeyboardMouse,
    Playstation,
    Xbox,
    Switch,
    Playstation5,
    Max,
};

