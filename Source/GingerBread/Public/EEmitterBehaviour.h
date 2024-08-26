#pragma once
#include "CoreMinimal.h"
#include "EEmitterBehaviour.generated.h"

UENUM(BlueprintType)
enum class EEmitterBehaviour : uint8 {
    ALWAYS_ON,
    ON_OFF,
    SPAWN_ONCE,
};

