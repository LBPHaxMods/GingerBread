#pragma once
#include "CoreMinimal.h"
#include "ELoadingType.generated.h"

UENUM(BlueprintType)
enum class ELoadingType : uint8 {
    Default,
    Level,
    ReturnToMap,
    NewWorld,
    Transition,
    Bonus,
    Spinner,
    Invalid,
};

