#pragma once
#include "CoreMinimal.h"
#include "ETimedChallengeState.generated.h"

UENUM(BlueprintType)
enum class ETimedChallengeState : uint8 {
    NotStarted,
    InProgress,
    Paused,
    Finished,
    Failed,
};

