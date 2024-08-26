#pragma once
#include "CoreMinimal.h"
#include "EWobbleBlobBaseType.generated.h"

UENUM(BlueprintType)
namespace EWobbleBlobBaseType {
    enum Type {
        Standard,
        WobbleBomb,
        SpikeyBlob,
        MegaBlob,
        WobbleCopter,
        Count,
    };
}

