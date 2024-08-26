#pragma once
#include "CoreMinimal.h"
#include "EWobbleBlobBaseNetState.generated.h"

UENUM(BlueprintType)
namespace EWobbleBlobBaseNetState {
    enum Type {
        None,
        ReadyToInflate,
        Inflating,
        Carried,
        Deflating,
        Burst,
        Thrown,
        Dropped,
    };
}

