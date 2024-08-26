#pragma once
#include "CoreMinimal.h"
#include "EPullOutPlatformState.generated.h"

UENUM(BlueprintType)
namespace EPullOutPlatformState {
    enum Type {
        Idle,
        Pulled,
        Returning,
    };
}

