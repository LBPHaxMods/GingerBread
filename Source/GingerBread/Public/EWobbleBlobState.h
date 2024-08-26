#pragma once
#include "CoreMinimal.h"
#include "EWobbleBlobState.generated.h"

UENUM(BlueprintType)
namespace EWobbleBlobState {
    enum Type {
        OnSurface,
        BeingCarried,
        InAir,
        Inactive,
    };
}

