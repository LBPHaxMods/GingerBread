#pragma once
#include "CoreMinimal.h"
#include "EPatrollingCrabAdditiveAnimState.generated.h"

UENUM(BlueprintType)
enum class EPatrollingCrabAdditiveAnimState : uint8 {
    NoAnim,
    Hit,
    NumStates,
};

