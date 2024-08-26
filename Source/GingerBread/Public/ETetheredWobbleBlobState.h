#pragma once
#include "CoreMinimal.h"
#include "ETetheredWobbleBlobState.generated.h"

UENUM(BlueprintType)
namespace ETetheredWobbleBlobState {
    enum Type {
        OnSurface,
        BeingCarried,
        InAir,
        Inactive,
    };
}

