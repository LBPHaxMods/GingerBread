#pragma once
#include "CoreMinimal.h"
#include "EVexConveyorFlamePanelState.generated.h"

UENUM(BlueprintType)
enum class EVexConveyorFlamePanelState : uint8 {
    Disabled,
    Off,
    Revealing,
    WrapRevealing,
    On,
    Hiding,
    WrapHiding,
};

