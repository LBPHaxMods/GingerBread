#pragma once
#include "CoreMinimal.h"
#include "ERhythmicWobbleBlobState.generated.h"

UENUM(BlueprintType)
namespace ERhythmicWobbleBlobState {
    enum Type {
        OnSurface,
        BeingCarried,
        InAir,
        Inactive,
    };
}

