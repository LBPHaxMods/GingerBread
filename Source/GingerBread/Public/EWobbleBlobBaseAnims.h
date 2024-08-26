#pragma once
#include "CoreMinimal.h"
#include "EWobbleBlobBaseAnims.generated.h"

UENUM(BlueprintType)
namespace EWobbleBlobBaseAnims {
    enum Type {
        InflateBlob,
        DeflateBlob,
        BurstBlob,
        CompressBlob,
        None,
    };
}

