#pragma once
#include "CoreMinimal.h"
#include "EVexConveyorLegacyFlamePanelState.generated.h"

UENUM(BlueprintType)
enum class EVexConveyorLegacyFlamePanelState : uint8 {
    Disabled,
    Off,
    Revealing,
    WrapRevealing,
    On,
    Hiding,
    WrapHiding,
};

