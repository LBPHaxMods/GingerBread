#pragma once
#include "CoreMinimal.h"
#include "ECollectableAction.generated.h"

UENUM(BlueprintType)
namespace ECollectableAction {
    enum Type {
        Idling,
        Vibrating,
        Attracting,
        Collected,
    };
}

