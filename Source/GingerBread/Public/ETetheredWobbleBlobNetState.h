#pragma once
#include "CoreMinimal.h"
#include "ETetheredWobbleBlobNetState.generated.h"

UENUM(BlueprintType)
namespace ETetheredWobbleBlobNetState {
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

