#pragma once
#include "CoreMinimal.h"
#include "ECheckpointOnStringNetState.generated.h"

UENUM(BlueprintType)
enum class ECheckpointOnStringNetState : uint8 {
    Up,
    ComingDownLeft,
    ComingDownRight,
    DownLeft,
    DownRight,
    ComingUp,
};

