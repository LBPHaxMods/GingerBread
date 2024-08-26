#pragma once
#include "CoreMinimal.h"
#include "ESackboyRollDazeState.generated.h"

UENUM(BlueprintType)
enum class ESackboyRollDazeState : uint8 {
    KnockBack,
    KnockBackRecovery,
};

