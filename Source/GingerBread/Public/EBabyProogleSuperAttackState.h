#pragma once
#include "CoreMinimal.h"
#include "EBabyProogleSuperAttackState.generated.h"

UENUM(BlueprintType)
enum class EBabyProogleSuperAttackState : uint8 {
    Invalid,
    Anticipation,
    Jumping,
    JumpingSpace,
    JumpingSpaceAlternate,
    Falling,
    Landing,
    Recovering,
    NumStates,
};

