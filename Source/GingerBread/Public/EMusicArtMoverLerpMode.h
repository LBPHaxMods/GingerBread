#pragma once
#include "CoreMinimal.h"
#include "EMusicArtMoverLerpMode.generated.h"

UENUM(BlueprintType)
namespace EMusicArtMoverLerpMode {
    enum Type {
        Linear,
        Smooth,
        Accellerate,
        Decellerate,
    };
}

