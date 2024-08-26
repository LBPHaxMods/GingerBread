#pragma once
#include "CoreMinimal.h"
#include "ERollSmashOverrideState.generated.h"

UENUM(BlueprintType)
enum class ERollSmashOverrideState : uint8 {
    DEFAULT,
    ALWAYS,
    NEVER,
};

