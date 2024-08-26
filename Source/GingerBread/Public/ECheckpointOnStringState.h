#pragma once
#include "CoreMinimal.h"
#include "ECheckpointOnStringState.generated.h"

UENUM(BlueprintType)
enum class ECheckpointOnStringState : uint8 {
    Up,
    ComingDown,
    Down,
    ComingUp,
};

