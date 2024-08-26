#pragma once
#include "CoreMinimal.h"
#include "EPufferFishState.generated.h"

UENUM(BlueprintType)
enum class EPufferFishState : uint8 {
    Disabled,
    Enabled,
    Sleeping,
    AlwaysEnabled,
};

