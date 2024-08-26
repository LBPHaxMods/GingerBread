#pragma once
#include "CoreMinimal.h"
#include "EWobbleBlobBaseState.generated.h"

UENUM(BlueprintType)
namespace EWobbleBlobBaseState {
    enum Type {
        OnSurface,
        BeingCarried,
        InAir,
        Inactive,
    };
}

