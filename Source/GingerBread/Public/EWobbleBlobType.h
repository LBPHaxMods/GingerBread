#pragma once
#include "CoreMinimal.h"
#include "EWobbleBlobType.generated.h"

UENUM(BlueprintType)
namespace EWobbleBlobType {
    enum Type {
        WobbleBlobSmall,
        WobbleBlobLarge,
        WobbleBomb,
        WobbleBarb,
        Count,
    };
}

