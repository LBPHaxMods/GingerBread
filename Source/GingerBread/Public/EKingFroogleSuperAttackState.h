#pragma once
#include "CoreMinimal.h"
#include "EKingFroogleSuperAttackState.generated.h"

UENUM(BlueprintType)
enum class EKingFroogleSuperAttackState : uint8 {
    Invalid,
    Anticipation,
    Jumping,
    Falling,
    Landing,
    NumStates,
};

