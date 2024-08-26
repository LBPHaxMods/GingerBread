#pragma once
#include "CoreMinimal.h"
#include "EWobbleBlobNetState.generated.h"

UENUM(BlueprintType)
namespace EWobbleBlobNetState {
    enum Type {
        None,
        Deflated,
        Inflating,
        Inflated,
        Deflating,
        Carried,
        Thrown,
        Dropped,
        Explode,
        Burst,
    };
}

