#pragma once
#include "CoreMinimal.h"
#include "ERollDazeOverrideState.generated.h"

UENUM(BlueprintType)
enum class ERollDazeOverrideState : uint8 {
    DEFAULT,
    ALWAYS,
    NEVER,
};

