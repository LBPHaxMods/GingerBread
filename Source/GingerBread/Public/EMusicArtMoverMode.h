#pragma once
#include "CoreMinimal.h"
#include "EMusicArtMoverMode.generated.h"

UENUM(BlueprintType)
namespace EMusicArtMoverMode {
    enum Type {
        None,
        MoveToTransform,
        MoveToSpline,
        MoveBetweenTransforms,
        MoveAlongSpline,
    };
}

