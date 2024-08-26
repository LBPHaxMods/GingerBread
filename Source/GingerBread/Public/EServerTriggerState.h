#pragma once
#include "CoreMinimal.h"
#include "EServerTriggerState.generated.h"

UENUM(BlueprintType)
enum class EServerTriggerState : uint8 {
    JustTriggered,
    PreviouslyTriggered,
    TryAgainLater,
    NotYetTriggered,
};

