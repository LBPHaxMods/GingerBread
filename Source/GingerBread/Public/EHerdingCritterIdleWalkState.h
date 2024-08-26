#pragma once
#include "CoreMinimal.h"
#include "EHerdingCritterIdleWalkState.generated.h"

UENUM(BlueprintType)
namespace EHerdingCritterIdleWalkState {
    enum Type {
        Walking,
        Hopping,
        None,
    };
}

