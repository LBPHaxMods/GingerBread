#pragma once
#include "CoreMinimal.h"
#include "ESlapExtenderState.generated.h"

UENUM(BlueprintType)
namespace ESlapExtenderState {
    enum Type {
        Idle,
        Extending,
        Extended,
        Retracting,
    };
}

