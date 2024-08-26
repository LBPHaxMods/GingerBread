#pragma once
#include "CoreMinimal.h"
#include "ERhythmicWobbleBlobNetState.generated.h"

UENUM(BlueprintType)
namespace ERhythmicWobbleBlobNetState {
    enum Type {
        None,
        Deflated,
        Inflating,
        Inflated,
        Deflating,
        Carried,
        Thrown,
        Dropped,
        Burst,
    };
}

