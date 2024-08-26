#pragma once
#include "CoreMinimal.h"
#include "EMuteAntStandingState.generated.h"

UENUM(BlueprintType)
enum class EMuteAntStandingState : uint8 {
    Invalid,
    Idle,
    Walking,
    Turning,
    NumStates,
};

