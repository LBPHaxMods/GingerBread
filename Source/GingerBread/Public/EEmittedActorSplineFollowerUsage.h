#pragma once
#include "CoreMinimal.h"
#include "EEmittedActorSplineFollowerUsage.generated.h"

UENUM(BlueprintType)
enum class EEmittedActorSplineFollowerUsage : uint8 {
    LOCAL,
    NETWORKED,
};

