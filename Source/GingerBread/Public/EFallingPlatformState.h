#pragma once
#include "CoreMinimal.h"
#include "EFallingPlatformState.generated.h"

UENUM(BlueprintType)
namespace EFallingPlatformState {
    enum Type {
        Idle,
        Vibrating,
        Falling,
        Fallen,
        Resetting,
    };
}

