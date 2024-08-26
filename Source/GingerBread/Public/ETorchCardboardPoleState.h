#pragma once
#include "CoreMinimal.h"
#include "ETorchCardboardPoleState.generated.h"

UENUM(BlueprintType)
enum class ETorchCardboardPoleState : uint8 {
    Off,
    Activating,
    On,
};

