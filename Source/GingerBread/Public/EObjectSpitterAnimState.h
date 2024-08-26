#pragma once
#include "CoreMinimal.h"
#include "EObjectSpitterAnimState.generated.h"

UENUM(BlueprintType)
namespace EObjectSpitterAnimState {
    enum Type {
        Idle,
        Swallowing,
        Spitting,
        Max,
    };
}

