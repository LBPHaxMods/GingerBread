#pragma once
#include "CoreMinimal.h"
#include "EThrowableState.generated.h"

UENUM(BlueprintType)
enum class EThrowableState : uint8 {
    AtRest,
    PickedUp,
    Thrown,
    Broken,
    Dropped,
};

