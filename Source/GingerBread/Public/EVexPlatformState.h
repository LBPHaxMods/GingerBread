#pragma once
#include "CoreMinimal.h"
#include "EVexPlatformState.generated.h"

UENUM(BlueprintType)
enum class EVexPlatformState : uint8 {
    Idle,
    Transitioning,
    Finished,
};

