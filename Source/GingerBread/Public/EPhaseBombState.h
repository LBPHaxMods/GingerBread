#pragma once
#include "CoreMinimal.h"
#include "EPhaseBombState.generated.h"

UENUM(BlueprintType)
namespace EPhaseBombState {
    enum Type {
        Idle,
        Expanding,
        Open,
        Contracting,
        Count,
    };
}

