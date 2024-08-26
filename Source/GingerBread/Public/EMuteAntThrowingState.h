#pragma once
#include "CoreMinimal.h"
#include "EMuteAntThrowingState.generated.h"

UENUM(BlueprintType)
enum class EMuteAntThrowingState : uint8 {
    Invalid,
    Prepare,
    Launch,
    NumStates,
};

