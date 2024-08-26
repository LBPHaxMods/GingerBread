#pragma once
#include "CoreMinimal.h"
#include "EMeanieAttackState.generated.h"

UENUM(BlueprintType)
enum class EMeanieAttackState : uint8 {
    Invalid,
    RightAnticipation,
    RightAttack,
    RightHit,
    RightFollowThrough,
    LeftAttack,
    LeftHit,
    LeftFollowThrough,
    NumStates,
};

