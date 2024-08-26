#pragma once
#include "CoreMinimal.h"
#include "EHerdingCritterState.generated.h"

UENUM(BlueprintType)
namespace EHerdingCritterState {
    enum Type {
        Idle,
        IdleWalk,
        Alert,
        Fleeing,
        Escaped,
    };
}

