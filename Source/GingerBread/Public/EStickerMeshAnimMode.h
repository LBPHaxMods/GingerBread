#pragma once
#include "CoreMinimal.h"
#include "EStickerMeshAnimMode.generated.h"

UENUM(BlueprintType)
namespace EStickerMeshAnimMode {
    enum Type {
        None,
        Animated,
        AnimatedFlat,
        Count,
    };
}

