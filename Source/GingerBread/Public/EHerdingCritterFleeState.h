#pragma once
#include "CoreMinimal.h"
#include "EHerdingCritterFleeState.generated.h"

UENUM(BlueprintType)
namespace EHerdingCritterFleeState {
    enum Type {
        Running,
        Jumping,
        Cornered,
        Pickedup,
        Thrown,
        None,
    };
}

