#pragma once
#include "CoreMinimal.h"
#include "EGrabKnotState.generated.h"

UENUM(BlueprintType)
namespace EGrabKnotState {
    enum Type {
        Idle,
        Grabbed,
        GrappleHooked,
        Retracting,
        Broken,
    };
}

