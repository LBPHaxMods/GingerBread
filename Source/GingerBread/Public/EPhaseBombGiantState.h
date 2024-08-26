#pragma once
#include "CoreMinimal.h"
#include "EPhaseBombGiantState.generated.h"

UENUM(BlueprintType)
enum class EPhaseBombGiantState : uint8 {
    Sleeping,
    WakingUp,
    Chasing,
    Laughing,
    Searching,
    FacePlant,
};

